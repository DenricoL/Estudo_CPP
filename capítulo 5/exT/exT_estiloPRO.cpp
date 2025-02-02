//Exc T, capitulo 5 - quadrados dos inteiros (sem armazenar em memoria) de 15 a 200, incrementando 3.
#include <iostream>

int main (void)
{
  std::cout << "Quadrados dos inteiros de 15 a 200, incrementando 3:" << std::endl;
  for(int I = 15; I <= 200; I += 3)
    std::cout << I*I << std::endl;

  std::cout << std::endl;
  std::cout << "Tecle <ENTER> para encerrar...";
  std::cin.get();
  return 0;
}
