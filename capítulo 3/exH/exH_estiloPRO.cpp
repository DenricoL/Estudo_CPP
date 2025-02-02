//exercício H, capítulo 3, volume da caixa - estilo PRO

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main (void)
{
  float larg, altu, comp, vol;

  std::cout << "Digite a largura da caixa: ";
  std::cin >> larg;
  std::cout << "Digite a altura da caixa: ";
  std::cin >> altu;
  std::cout << "Digite o comprimento da caixa: "; std::cin >> comp;

  vol = comp * larg * altu;

  std::cout << "Volume da caixa: " << vol << std::endl;
  std::cout << endl;
  std::cout << "Tecle <ENTER> para encerrar";;
  return 0;
}
