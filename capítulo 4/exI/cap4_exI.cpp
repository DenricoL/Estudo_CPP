//ex I capitulo 4 - ler valor inteiro e apresentar caso não seja maior que 3

#include <iostream>
using namespace std;

int main (void)
{
  int valor;

  cout <<"Insira um valor: ";
  cin >> valor;
  cin.ignore(80, '\n');

  if (not(valor > 3))
    cout << "Valor: " << valor << endl;

  cout << endl;
  cout << "Tecle <ENTER> para encerrar...";
  cin.get();
  return 0;
}
