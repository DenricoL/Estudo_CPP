//capitulo 4 ex B - Estilo PRO

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main (void)
{
  int A;

  std::cout << "Insira um valor: ";
  std::cin >> A;
  cin.ignore(80, '\n');

  if (A < 0)
    std::cout <<"Resultado = " << A * -1 << endl;
  else
    std::cout << "Resultado = " << A << endl;

  std::cout << "\n";
  std::cout << "Tecle <ENTER> para encerrar...";
  cin.get();
  return 0;
}
