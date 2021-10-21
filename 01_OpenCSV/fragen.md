# Fragen zum ersten Laboratorium

## I
build them.
make install

## II
Linking:
-l[linalg]

    => Links to shared library or shared object - Specifically, it links to linalg.dll on Windows, liblinalg.so (on Unix-like oses like Linux, BSD, AIX, …) or linalg.dylib on MacOSX.

-L[/path/to/shared-libraries]

    => Add search path to shared libraries, directory containing *.so, *.dll or *.dlyb files such as libLinearAlgebra.so depending on the current operating system.


Compiler:
Common library flags

    -lm - Compiles against the shared library libm (basic math library, mostly C only)
    -lpthread - Compile against Posix threads shared library

Include Path - Directories containing headers files.

    -I/path/to/include1 -I/path/to/include2 …


## III

pkg-config (von engl. package, „Paket“ und config, „Konfiguration“) ist ein Computerprogramm, das eine einheitliche Schnittstelle zur Abfrage von Metadaten über beliebige Software bereitstellt. pkg-config wird in erster Linie für die Versionsverwaltung installierter Programmbibliotheken eingesetzt und liefert dabei zum Beispiel Informationen über

    die Versionsnummer der Programmbibliothek,
    die für den C- oder C++-Compiler oder Software-Dokumentationswerkzeuge benötigten Parameter sowie
    Parameter für den Linker.

Mit den Informationen, die aus der Abfrage resultieren, können beispielsweise ausführbare Programme aus Quelltext übersetzt (kompiliert) werden. pkg-config wurde ursprünglich für Unix entwickelt, steht heute aber auch für andere Betriebssysteme wie Microsoft Windows zur Verfügung. 

## IV

CFLAGS    =  `pkg-config --cflags gstreamer-1.0`
LDFLAGS    =  `pkg-config --libs gstreamer-1.0`
CLIBS     = `pkg-config --libs gstreamer-1.0`

## V

Ein Konstruoktor der verwendet wird, wenn ein Objekt kopiert wird. (Shallow Copies)
Verwendet wird er automatisch

    ClassName (const ClassName &old_obj); 
 
## VI

Call by reference: greift auf den originalen vektor zu
Call by value: erzeugt eine Kopie dieses vektors => VIEEEL mehr speicherauslastung

## VII

Mit einer Eigenen Klasse?

## VIII

Mittels "auto" 