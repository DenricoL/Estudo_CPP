//ex o capitulo 4 - estilo pro
#include <iostream>

int main (void)
{
  int n, r;

  setlocale(LC_ALL, "Portuguese");

  std::cout << "Digite um número: ";
  std::cin >> n;
  std::cin.ignore(80, '\n');

  r = n*2;

  if (r > 30)
    std::cout << "Resultado maior que 30." << std::endl;
  else
    std::cout << r << std::endl;

  std::cout << std::endl;
  std::cout << "Tecle <ENTER> para encerrar...";
  std::cin.get();
  return 0;
}
