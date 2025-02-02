//exc I capitulo 3, valor ao quadrado sem armazenar resultado - estilo PRO

#include <iostream>
#include <math.h>

using std::cout;
using std::cin;
using std::endl;

int main (void)
{
  int valor;

  std::cout << "Digite um valor inteiro: "; std::cin >> valor;

  std::cout << "Valor ao quadrado = " << pow(valor, 2) << std::endl;
  std::cout << endl;
  std::cout << "Tecle <ENTER> para encerrar";;
  return 0;
}
