//exercicio B, capitulo 3,celsius e fahrenheint

#include <iostream>

using namespace std;

int main (void)
{
  float cel, faren;

  cout << "Digite a temperatura em graus Fahrenheint: "; cin >> faren;

  cel = ((faren - 32)*5)/9;

  cout << "Temperatura em graus Celsius: " << cel;
  return 0;
}
