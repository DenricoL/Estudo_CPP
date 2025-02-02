#include <iostream>
#include <math.h>

using namespace std;

int main (void)
{
  float prest, valor, taxa, tempo;

  cout << "informe o valor"; cin >> valor;
  cin.ignore(80, '\n');

  cout << "informe a taxa"; cin >> taxa;
  cin.ignore(80, '\n');

  cout << "informe o tempo"; cin >> tempo;
  cin.ignore(80, '\n');

  prest = valor + (valor * (taxa/100) * tempo);

  cout <<"Resultado =" << prest << endl;
  cout <<endl;
  cout << "Tecle <Enter> para encerrar...";
  return 0;

}
