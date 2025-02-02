//exercicio A, capitulo 3,celsius e fahrenheint

#include <iostream>

using namespace std;

int main (void)
{
  float cel, faren;

  cout << "Digite a temperatura em graus Celsius: "; cin >> cel;

  faren = cel * 9/5 + 32;

  cout << "Temperatura em graus Fahrenheint: " << faren;
  return 0;
}
