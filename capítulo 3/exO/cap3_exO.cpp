//capitlo 3 exc O

#include <iostream>

using namespace std;

int main (void)
{
  int A, B, C, D, P, S;

  cout << "Informe o primeiro valor: "; cin >> A;
  cout << "Informe o segundo valor: "; cin >> B;
  cout << "Informe o terceiro valor: "; cin >> C;
  cout << "Informe o quarto valor: "; cin >> D;

  P = A * C;
  S = B + D;

  cout << "Produto = " << P; cout << endl;
  cout << "Soma = " << S;

  return 0;
}
