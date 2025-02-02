//exercicio B, capitulo 3,celsius e fahrenheint - Estilo PRO

#include <iostream>

using std::cout;
using std::cin;

int main (void)
{
  float cel, faren;

  std::cout << "Digite a temperatura em graus Fahrenheint: ";
  std::cin >> faren;

  cel = ((faren - 32)*5)/9;

  std::cout << "Temperatura em graus Celsius: " << cel;
  return 0;
}
