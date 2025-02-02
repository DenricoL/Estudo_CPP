//exercicio F capitulo 3, troca de valores - estilo PRO

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main (void)
{
  float A, B, X;

  std::cout << "Insira o primeiro valor: ";
  std::cin >> A;
  std::cout << "Insira o segundo valor: ";
  std::cin >> B;

  X = A;
  A = B;
  B = X;

  std::cout << "primeiro valor = " << A;
  std::cout << endl;
  std::cout << "segundo valor = " << B << std::endl;
  std::cout << endl;
  std::cout << "Tecle <ENTER> para encerrar";
  return 0;
}
