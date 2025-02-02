//ex H - capitulo 5 BE usando laço

#include <iostream>
using namespace std;

int main (void)
{
  int B, E, I = 1, R;
  cin >> B;
  cin >> E;

  while (I <= E)
  {
    R = B*B;
    ++I;
  }
    cout << R;
    return 0;
}
