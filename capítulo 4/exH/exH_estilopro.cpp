//EX H capitulo 4 - estilo pro
#include <iostream>

int main (void)
{
  int A, B, C, D, R, T;

  setlocale(LC_ALL, "portuguese");

  std::cout << "Apenas valores divisíveis por 2 e 3 serão apresentados." << std::endl;

  std::cout << "Insira o valor A: ";
  std::cin >> A;
  std::cin.ignore(80, '\n');
  std::cout << "Insira o valor B: ";
  std::cin >> B;
  std::cin.ignore(80, '\n');
  std::cout << "Insira o valor C: ";
  std::cin >> C;
  std::cin.ignore(80, '\n');
  std::cout << "Insira o valor D: ";
  std::cin >> D;
  std::cin.ignore(80, '\n');

  std::cout << "Valores divisíveis por 2 e 3: " << std::endl;

  R = A - 2 * (A/2);
  T = A - 3 * (A/3);

  if (R == 0 and T == 0)
    std::cout << "A (" << A << ")" << std::endl;

  R = B - 2 * (B/2);
  T = B - 3 * (B/3);

  if (R == 0 and T == 0)
    std::cout << "B (" << B << ")" << std::endl;

  R = C - 2 * (C/2);
  T = C - 3 * (C/3);

  if (R == 0 and T == 0)
    std::cout << "C (" << C << ")" << std::endl;

  R = D - 2 * (D/2);
  T = D - 3 * (D/3);

  if (R == 0 and T == 0)
    std::cout << "D (" << D << ")" << std::endl;


  std::cout << std::endl;
  std::cout << "Tecle <ENTER> para encerrar...";
  std::cin.get();
  return 0;
}
