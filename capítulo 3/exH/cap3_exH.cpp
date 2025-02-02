//exercício H, capítulo 3, volume da caixa

#include <iostream>

using namespace std;

int main (void)
{
  float larg, altu, comp, vol;

  cout << "Digite a largura da caixa: "; cin >> larg;
  cout << "Digite a altura da caixa: "; cin >> altu;
  cout << "Digite o comprimento da caixa: "; cin >> comp;

  vol = comp * larg * altu;

  cout << "Volume da caixa: " << vol;
  return 0;
}
