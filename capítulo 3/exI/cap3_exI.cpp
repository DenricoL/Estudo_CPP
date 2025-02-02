//exc I capitulo 3, valor ao quadrado sem armazenar resultado

#include <iostream>
#include <math.h>

using namespace std;

int main (void)
{
int valor;

cout << "insira o valor inteiro: "; cin >> valor;

cout << "valor ao quadrado = " << pow(valor, 2);
return 0;
}
