//ex d capitulo 4 - estilo PRO

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main (void)
{
  float N1, N2, N3, N4, MD1, MD2;

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

  MD1 = (N1 + N2 + N3 + N4)/4;

  if (N1 > 10 or N1 < 0
   or N2 > 10 or N2 < 0
   or N3 > 10 or N3 < 0
   or N4 > 10 or N4 < 0)
    std::cout << "Nota inválida." << endl;
  else
  {
    if (MD1 >= 7)
      std::cout <<"Aprovado. Média = " << MD1 << endl;
    else
      {
        std::cout <<"Insira a nota de exame = ";
        std::cin >> MD2;
        if (MD2 > 10 or MD2 < 0)
          std::cout << "Nota inválida." << endl;
        else
        {
          if (MD2 >=5)
            std::cout <<"Aprovado em exame. Nota = " << MD2 << endl;
          else
            std::cout <<"Reprovado. Nota de exame = " << MD2 << endl;
       }
      }
  }
  std::cout << endl;
  std::cout << "Tecle <ENTER> para encerrar...";
  cin.get();
  return 0;
}
