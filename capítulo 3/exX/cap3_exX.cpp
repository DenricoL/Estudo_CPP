//Exercicio X capitulo 3 - raiz de base qualquer com indice qualquer

#include <iostream>
#include <math.h>

using namespace std;

int main (void)
{
  float b, i, r;

  cout << "Insira a base da raiz: ";
  cin >> b;
  cin.ignore(80, '\n');

  cout << "Insira o indice da raiz: ";
  cin >> i;
  cin.ignore(80, '\n');

  r = pow(b, 1/i);

  cout << "Raiz = " << r;
  cout << "\n";
  cout << "\n";

  cout << "Tecle <ENTER> para encerrar...";
  cin.get();
  return 0;
}
