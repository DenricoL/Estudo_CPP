//exO capitulo 4 - ler um n inteiro e dobrar (apresentar só se o resultado for > 2)

#include <iostream>
using namespace std;

int main (void)
{
  int n, r;

  setlocale(LC_ALL, "Portuguese");

  cout <<"Digite um número inteiro: ";
  cin >> n;
  cin.ignore (80, '\n');

  r = n*2;

  if (r <= 30)
    cout <<"Resultado = " << r << endl;
  else
    cout <<"Resultado maior que 30.";

  cout << endl;
  cout <<"Tecle <ENTER> para encerrar";
  cin.get();
  return 0;
}
