//cap 5 exc F - todos valores divisiveis por 4 e menores que 200
#include <iostream>
using namespace std;

int main(void)
{
  int I = 1;
  while(I < 200)
  {
    int R = I - 4 * (I/4);
    if(R == 0)
      cout << I << ", ";
    ++I;
  }
  return 0;
}
