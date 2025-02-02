//ex 4 A - estilo pro
#include <iostream>

int main (void)
{
  setlocale (LC_ALL, "Portuguese");
  int x;
  x = 15;

  do
  {
    int quad = x*x;
    std::cout << "O quadrado de " << x << " é: " << quad << std::endl;
    ++x;
  }
  while (x <= 200);
  std::cout << std::endl;
  std::cout << "Tecle <ENTER> para encerrar...";
  std::cin.get();
  return 0;
}
