#include <iostream>
#include <math.h>

using std::cout;
using std::cin;
using std::endl;

int main (void)
{
  float prest, valor, taxa, tempo;

  std::cout << "informe o valor: "; std::cin >> valor;
  std::cin.ignore(80, '\n');

  std::cout << "informe a taxa: "; std::cin >> taxa;
  std::cin.ignore(80, '\n');

  std::cout << "informe o tempo: "; std::cin >> tempo;
  std::cin.ignore(80, '\n');

  prest = valor + (valor * (taxa/100) * tempo);

  std::cout <<"Resultado =" << prest << std::endl;
  std::cout << std::endl;
  std::cout << "Tecle <Enter> para encerrar...";
  return 0;

}
