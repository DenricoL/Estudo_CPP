//exercicio C capitulo 3, volume da lata

#include <iostream>
#include <math.h>

using namespace std;


int main (void)
{
  float raio, altura, volume;

  cout << "Digite o valor da altura da lata: "; cin >> altura;
  cout << "Digite o valor do raio da lata: "; cin >> raio;

  volume = 3.14159 * pow(raio, 2) * altura;

  cout << "Valor do volume da lata = " << volume;
  return 0;
}
