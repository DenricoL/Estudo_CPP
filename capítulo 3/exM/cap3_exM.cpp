//capitulo 3 ex M, soma dos quadrados

#include <iostream>
#include <math.h>

using namespace std;

int main (void)
{
int A, B, C, R;

cout << "Insira o primeiro valor: "; cin >> A;
cout << "Insira o segundo valor: "; cin >> B;
cout << "Insira o terceiro valor: "; cin >> C;

R = pow(A,2) + pow(B,2) + pow(C,2);

cout << "Soma dos quadrados = " << R;
return 0;

}
