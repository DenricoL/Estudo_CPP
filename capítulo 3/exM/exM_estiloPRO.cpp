//capitulo 3 ex M, soma dos quadrados - estilo PRO

#include <iostream>
#include <math.h>

using std::cout;
using std::cin;
using std::endl;

int main (void)
{
  int A, B, C, R;

  std::cout << "Insira o primeiro valor: "; std::cin >> A;
  std::cout << "Insira o segundo valor: "; std::cin >> B;
  std::cout << "Insira o terceiro valor: "; std::cin >> C;

  R = pow(A,2) + pow(B,2) + pow(C,2);

  std::cout << "Soma dos quadrados = " << R << std::endl;
  std::cout << endl;
  std::cout << "Tecle <ENTER> para encerrar";
  return 0;

}
