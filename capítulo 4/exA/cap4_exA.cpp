//excercicio A capitulo 4 - maior valor subtraido pelo menor

#include <iostream>

using namespace std;

int main (void)
{
  int A, B;

  setlocale(LC_ALL, "Portuguese");

  cout <<"Digite o primeiro valor: ";
  cin >> A;
  cin.ignore(80, '\n');

  cout <<"Digite o segundo valor: ";
  cin >> B;
  cin.ignore(80, '\n');

  if (A == B)
    cout <<"Valores iguais.";
  else
    if (A > B)
      cout <<"Subtração = " << A - B;
    else
      cout <<"Subtração = " << B - A;

  cout << "\n" << endl;
  cout << "Tecle <ENTER> para encerrar...";
  cin.get();
  return 0;
}
