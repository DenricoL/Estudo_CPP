//ex 3B capitulo 4 - ler numero inteiro aleatorio e apresentar como valor positivo

#include <iostream>

using namespace std;

int main (void)
{
  int A, b;

  cout <<"Insira um valor: ";
  cin >> A;
  cin.ignore(80, '\n');

  if (A < 0)
    cout << "Resultado = " << A * -1 << endl;
  else
    cout << "Resultado = " << A << endl;

  cout << endl;
  cout <<"Tecle <ENTER> para encerrar...";
  cin.get();
  return 0;
}
