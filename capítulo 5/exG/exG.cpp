//ex G - capitulo 5
#include <iostream>
#include <math.h>
using namespace std;

int main (void)
{
  int I, R;
  setlocale(LC_ALL, "Portuguese");
  cout << "Tecle <ENTER> para visualizar as potências de 3 elevado de 0 até 15..." << endl;
  cin.get();

  while (I <= 15)
  {
    R = pow(3,I);
    cout << "3 elevado a " << I << " = " << R << endl;
    ++I;
  }
  cout << endl;
  cout << "Tecle <ENTER> para encerrar...";
  cin.get();
  return 0;
}
