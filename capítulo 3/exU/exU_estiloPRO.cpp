//exercicio u capitulo 3, volume da esfera (com duvidas) - estilo PRO

#include <iostream>
#include <math.h>

using std::cout;
using std::cin;
using std::endl;

int main (void)
{
  float raio, volume, pi;

  std::cout << "Digite o valor do raio da esfera: "; std::cin >> raio;
  pi = 3.14159;
  volume = 4*pi*pow(raio,3)/3;

  std::cout <<"Valor do volume da esfera = " << volume << std::endl;
  std::cout << endl;
  std::cout << "Tecle <ENTER> para encerrar...";
  return 0;
}
