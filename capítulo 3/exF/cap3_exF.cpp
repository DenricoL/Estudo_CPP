//exercicio F capitulo 3, troca de valores

#include <iostream>

using namespace std;

int main (void)
{
float A, B, X;

cout << "Insira o primeiro valor: "; cin >> A;
cout << "Insira o segundo valor: "; cin >> B;

X = A;
A = B;
B = X;

cout << "primeiro valor = " << A;
cout << endl;
cout << "segundo valor = " << B;
return 0;
}
