//exercicio A, capitulo 3,celsius e fahrenheint

#include <iostream>

using std::cout;
using std::cin;

int main (void)
{
  float cel, faren;

  std::cout << "Digite a temperatura em graus Celsius: "; std::cin >> cel;

  faren = cel * 9/5 + 32;

  std::cout << "Temperatura em graus Fahrenheint: " << faren;
  return 0;
}
