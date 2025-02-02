//exX - estilo pro

#include <iostream>
#include <cmath>

using std::cout;
using std::cin;
using std::endl;

int main (void)
{
  float b, i, r;

  std::cout << "Digite a base da raiz: ";
  std::cin >> b;
  cin.ignore(80, '\n');

  std::cout << "Digite o indice da raiz: ";
  std::cin >> i;
  cin.ignore(80, '\n');

  r = pow(b, 1/i);

  std::cout << "Resultado da raiz = " << r << endl;
  std::cout << endl;

  std::cout <<"Tecle <ENTER> para encerrar...";
  cin.get();
  return 0;
}
