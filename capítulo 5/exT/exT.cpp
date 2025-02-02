//ex T cap 5 quadrados sem armazenar dos valores int de 15 a 200 de 3 em 3
#include <iostream>
using namespace std;

int main(void)
{
  cout <<"Quadrados de 15 a 200 (incrementando de 3 em 3): " << endl;
  for(int I = 15; I <= 200; I += 3)
    cout << I * I << endl;
  return 0;
}
