//ex N estilo_pro
#include <iostream>

int main (void)
{
  int A, B, C, R;

  std::cout<< "Insira o valor A: ";
  std::cin >> A;
  std::cin.ignore(80, '\n');

  std::cout <<"Insira o valor B: ";
  std::cin >> B;
  std::cin.ignore(80, '\n');

  std::cout <<"Insira o valor C: ";
  std::cin >> C;
  std::cin.ignore(80, '\n');

  R = A+B+C;

  if (R >= 100)
    std::cout << "Resultado = " << R << std::endl;
  else
    std::cout << "Resultado menor que 100." << std::endl;

  std::cout << std::endl;
  std::cout << "Tecle <ENTER> para encerrar...";
  std::cin.get();
  return 0;
}
