//ex 1 A - estilo pro
#include <iostream>

int main (void)
{
  setlocale (LC_ALL, "Portuguese");
  int x;
  x = 15;

  while (x <= 200)
  {
    int quad = x * x;
    std::cout << "O quadrado de " << x << " é: " << quad << std::endl;
    ++x;
  }
  std::cout << std::endl;
  std::cout << "Tecle <ENTER> para encerrar...";
  std::cin.get();
  return 0;
}
