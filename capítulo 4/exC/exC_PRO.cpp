//ex c capitulo 4 - estilo PRO

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main (void)
{
  float N1, N2, N3, N4, MD;

  setlocale(LC_ALL, "Portuguese");

  std::cout <<"Insira a nota do primeiro bimestre: ";
  std::cin >> N1;
  cin.ignore(80, '\n');
  std::cout <<"Insira a nota do segundo bimestre: ";
  std::cin >> N2;
  cin.ignore(80, '\n');
  std::cout <<"Insira a nota do terceiro bimestre: ";
  std::cin >> N3;
  cin.ignore(80, '\n');
  std::cout <<"Insira a nota do quarto bimestre: ";
  std::cin >> N4;
  cin.ignore(80, '\n');

  MD = (N1 + N2 + N3 + N4)/4;

  if (MD >= 5)
    std::cout <<"Aprovado. Média = " << MD << endl;
  else
    std::cout <<"Reprovado. Média = " << MD << endl;

  std::cout << "Tecle <ENTER> para encerrar...";
  cin.get();
  return 0;
}
