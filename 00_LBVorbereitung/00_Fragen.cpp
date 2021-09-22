#include <iostream>
#include <vector>
#include <array>
#include <algorithm>

using namespace std;

class object
{
  private:
    int id;
    static vector<int> ids;
    
    static bool id_exists(const int id)
    {
      return find(ids.cbegin(), ids.cend(), id) != ids.cend();
    }

  public:
    object(const int id = -1) : id(id)
    {
      if (!id_exists(id))
        ids.push_back(id);
    }
  
    int get_id() const
    {
      return id;
    }
    
    static int number_of_ids()
    {
      return ids.size();
    }

    static int odd_ids()
    {
      return count_if(ids.cbegin(), ids.cend(),
                      [](const int id)
                        {
                          return id % 2;
                        });
    }
};

vector<int> object::ids;

ostream &operator<<(ostream &os, const object &o)
{
  return (os << o.get_id());
}

int main(const int, const char * const[])
{
  object obj;
  for (int i = 0; i < 10; i++)
  {
    object o(i ^ 3);
    cout << i << " " << o << " " << obj << endl;
  }
  using function = pair<string, int(*)()>;
  const function f1(" IDs have been used, ",
                    &object::number_of_ids),
                 f2(" of which were odd.",
                    &object::odd_ids);
  const array<function, 2> functions { f1, f2 };
  for (const auto &f : functions)
    cout << (*f.second)() << f.first;
}
