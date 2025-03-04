// Prosze dopisac kod, dodac nowe pliki, tak aby program wykonywal
// sie, a wynik jego dzialania byl taki sam jak podany na końcu tego
// pliku.

// Prosze zaimplementowac klasę Line która reprezentuje linię,
// wg. matetycznego równania: y = a *x + b, oraz pozwala na wyliczania
// wartości operatorem (), i punktu przecięcia z osią odcietych (x'ów) wg równania
// x0 = - b / a;
// Proszę zaimplementować również klasę LPrint oraz LArray które, odpowiednio
// pozwalają drukować na ekran instancję klasy Line oraz przechowywać jako tablicę
// instancje klasy Line; Uwaga: tablica LArray powinna być dynamicznie alokowana,
// z wykorzystaniem argumentu konstruktora odpowiadającemy za rozmiar tablicy.

// Pliku Main.cpp, nie wolno modyfikowac.

// Ostateczny program powinien byc przyjazny dla programisty (miec
// czytelny i dobrze napisany kod), oraz powinna być spełniona zasada
// D.R.Y. - Don't Repeat Yourself.

// Przy wykonaniu zadania nie wolno korzystac z internetu, notatek,
// ani zadnych innych materialow.

// Kody źródłowe muszą znajdować się w katalogu do którego nikt oprócz
// właściciela nie ma praw dostępu.
// Rozwiazanie (czyli dodane pliki i Main.cpp należy wgrać do UPEL
// jako archiwum tar.gz
// UWAGA:
// * archiwum powinno zawierać katalog z zadaniem, np. lab10/
// * archiwum nie powinno zawierać katalogu build/

#include "Line.h"
#include <vector>
#include <algorithm>

int main ()
{
  Line fa;          // y = 1*x + 1
double y1 = fa(20.0);// y1 = 20 + 1
std::cout << "y1 = " << y1 << "\tx0 = "<< fa.X0() << std::endl;

  LPrint print_line;
  print_line(fa);

  std::vector<Line> lines = { fa, 2, 3 };
  std::for_each(lines.begin(), lines.end(), print_line);

  LArray arr(3);
  arr.Add(lines[1]);
  arr.Add(3).Add(4);
  print_line(arr);

return 0;

}
/* wynik dzialania programu:
y1 = 21 x0 = -1
y = 1* x + 1    x0 = -1
y = 1* x + 1    x0 = -1
y = 2* x + 2    x0 = -1
y = 3* x + 3    x0 = -1
[0] y = 2* x + 2        x0 = -1
[1] y = 3* x + 3        x0 = -1
[2] y = 4* x + 4        x0 = -1
*/