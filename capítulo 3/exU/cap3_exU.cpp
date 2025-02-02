//exercicio u capitulo 3

#include <iostream>
#include <math.h>

using namespace std;

int main (void)
{
  float raio, volume, pi;

  cout << "Digite o valor do raio da esfera: "; cin >> raio;
  pi = 3.14159;
  volume = (4.0/3.0)*pi*(pow(raio,3));

  cout <<"Valor do volume da esfera = " << volume;
  return 0;
}
