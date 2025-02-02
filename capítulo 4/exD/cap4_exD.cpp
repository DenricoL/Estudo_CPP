//capitulo 4 ex D - media aritmetica do aluno (e nota de exame)

#include <iostream>

using namespace std;

int main (void)
{
  float N1, N2, N3, N4, MD1, MD2;

  setlocale(LC_ALL, "Portuguese");

  cout << "Insira a nota do primeiro bimestre: ";
  cin >> N1;
  cin.ignore(80, '\n');
  cout << "Insira a nota do segundo bimestre: ";
  cin >> N2;
  cin.ignore(80, '\n');
  cout << "Insira a nota do terceiro bimestre: ";
  cin >> N3;
  cin.ignore(80, '\n');
  cout << "Insira a nota do quarto bimestre: ";
  cin >> N4;
  cin.ignore(80, '\n');

  MD1 = (N1 + N2 + N3 + N4)/4;

  if (MD1 >= 7)
    cout << "Aprovado. Média = " << MD1;
  else
  {
    cout << "Insira a nota de exame final: ";
    cin >> MD2;
    if (MD2 >= 5)
      cout << "Aprovado em exame. Média = " << MD2;
    else
      cout << "Reprovado. Média = " << MD2;
  }
  cout << "\n" << endl;
  cout << "Tecle <ENTER> para encerrar...";
  cin.get();
  return 0;
}
