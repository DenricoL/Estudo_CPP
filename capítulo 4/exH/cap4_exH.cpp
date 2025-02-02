//ex H capitulo 4 - ler A B C D e apresentar quem for divisivel por 2 e 3

#include <iostream>
using namespace std;

int main (void)
{
  int A, B, C, D, R, T;

  setlocale(LC_ALL, "Portuguese");

  cout <<"Apenas valores divisíveis por 2 e 3 serão apresentados."  << endl;
  cout << endl;

  cout <<"Insira o valor numérico 'A': ";
  cin >> A;
  cin.ignore(80, '\n');

  cout <<"Insira o valor numérico 'B': ";
  cin >> B;
  cin.ignore(80, '\n');

  cout <<"Insira o valor numérico 'C': ";
  cin >> C;
  cin.ignore(80, '\n');

  cout <<"Insira o valor numérico 'D': ";
  cin >> D;
  cin.ignore(80, '\n');

  cout << endl;

  cout << "Valores divisíveis por 2 e 3: " << endl;

  R = A - 2 * (A/2);
  T = A - 3 * (A/3);

  if (R == 0 and T == 0)
    cout << "A (" << A << ")" << endl;

  R = B - 2 * (B/2);
  T = B - 3 * (B/3);

  if (R == 0 and T == 0)
    cout << "B (" << B << ")" << endl;

  R = C - 2 * (C/2);
  T = C - 3 * (C/3);

  if (R == 0 and T == 0)
    cout << "C (" << C << ")" << endl;

  R = D - 2 * (D/2);
  T = D - 3 * (D/3);

  if (R == 0 and T == 0)
    cout << "D (" << D << ")" << endl;

  cout << "\n" << endl;
  cout << "Tecle <ENTER> para encerrar...";
  cin.get();
  return 0;
}
