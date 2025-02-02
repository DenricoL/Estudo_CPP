//capitlo 3 exc O, produto (primeiro e terceiro) e soma (segundo e quarto) - estilo PRO

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main (void)
{
  int A, B, C, D, P, S;

  std::cout << "Informe o primeiro valor: ";
  std::cin >> A;
  std::cout << "Informe o segundo valor: ";
  std::cin >> B;
  std::cout << "Informe o terceiro valor: ";
  std::cin >> C;
  std::cout << "Informe o quarto valor: ";
  std::cin >> D;

  P = A * C;
  S = B + D;

  std::cout << "Produto = " << P;
  std::cout << endl;
  std::cout << "Soma = " << S << std::endl;
  std::cout << endl;
  cout << "Tecle <ENTER> para encerrar...";
  return 0;
}
