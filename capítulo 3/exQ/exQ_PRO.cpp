//exQ - estilo PRO

#include <iostream>
#include <cmath>

using std::cin;
using std::cout;
using std::endl;

int main (void)
{
  float R, A;

  setlocale(LC_ALL, "Portuguese");

  std::cout <<"Insira o raio da circunferência: ";
  std::cin >> R;
  cin.ignore(80, '\n');

  A = 3.14159265 * pow(R, 2);

  std::cout <<"Área = " << A << endl;
  std::cout << endl;
  std::cout <<"Tecle <ENTER> para encerrar...";
  cin.get();
  return 0;
}
