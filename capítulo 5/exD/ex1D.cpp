//ex 1 D somatorio de valores pares de 1 ate 500
#include <iostream>

using namespace std;

int main()
{
  setlocale(LC_ALL, "Portuguese");
  int i=1, s=0, r;

  while (i<=500)
  {
    r = i - 2 * (i/2);
    if (r == 0)
      s += i;
    ++i;
  }
  cout << "Somatorio = " << s << endl;
  cout << endl;
  cout << "Tecle <ENTER> para encerrar...";
  cin.get();
  return 0;
}
