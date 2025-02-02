//ex  N capitulo 4 - somar a b c, apresentar r só se for >= 100

#include <iostream>

using namespace std;

int main (void)
{
  int A, B, C, R;

  cout <<"Insira o valor A: ";
  cin >> A;
  cin.ignore(80, '\n');

  cout <<"Insira o valor B: ";
  cin >> B;
  cin.ignore(80, '\n');

  cout <<"Insira o valor C: ";
  cin >> C;
  cin.ignore(80, '\n');

  R = A+B+C;

  if (R >= 100)
    cout <<"Resultado = " << R << endl;
  else
    cout << "Resultado menor que 100." << endl;

  cout << endl;
  cout << "Tecle <ENTER> para encerrar...";
  cin.get();
  return 0;
}
