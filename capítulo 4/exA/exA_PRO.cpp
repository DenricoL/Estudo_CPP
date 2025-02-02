//exA capitulo 4 - estilo PRO

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main (void)
{
  int A, B;

  setlocale(LC_ALL, "Portuguese");

  std::cout <<"Insira o primeiro valor: ";
  std::cin >> A;
  cin.ignore(80, '\n');

  std::cout <<"Insira o segundo valor: ";
  std::cin >> B;
  cin.ignore(80, '\n');

  if (A == B)
    std::cout <<"Valores iguais.";
  else
    if (A > B)
      std::cout <<"Subtração = " << A - B;
    else
      std::cout <<"Subtração = " << B - A;

  std::cout << "\n" << endl;
  std::cout << "Tecle <ENTER> para encerrar...";
  cin.get();
  return 0;
}
