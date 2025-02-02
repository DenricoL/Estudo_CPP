//exercicio C capitulo 3, volume da lata - Estilo PRO

#include <iostream>
#include <math.h>

using std::cout;
using std::cin;

int main (void)
{
  float raio, altura, volume;

  std::cout << "Digite o valor da altura da lata: ";
  std::cin >> altura;
  std::cout << "Digite o valor do raio da lata: ";
  std::cin >> raio;

  volume = 3.14159 * pow(raio, 2) * altura;

  std::cout << "Valor do volume da lata = " << volume;
  return 0;
}
