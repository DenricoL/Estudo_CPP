//capitulo 4 ex C - media aritmetica do aluno

#include <iostream>

using namespace std;

int main (void)
{
  float N1, N2, N3, N4, MD;

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

  MD = (N1 + N2 + N3 + N4)/4;

  if (MD >= 5)
    cout << "Aprovado. Média = " << MD;
  else
    cout << "Reprovado. Média = " << MD;

  cout << "\n" << endl;
  cout << "Tecle <ENTER> para encerrar...";
  cin.get();
  return 0;
}
