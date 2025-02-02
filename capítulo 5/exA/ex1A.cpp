//exc a capitulo 5 - quadrados de 15 a 200

#include <iostream>
#include <cmath>

using namespace std;

int main (void)
{
  setlocale (LC_ALL, "Portuguese");
  int x;

  x = 15;

  while (x <= 200)
  {
    int quad = pow (x,2);
    cout << "O quadrado de " << x << " é = " << quad << endl;
    ++x;
  }
  return 0;
}
