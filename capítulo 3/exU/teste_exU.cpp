//socorro
#include <iostream>
#include <iomanip>
#include <cmath>
#define n 3.14159

using namespace std;

int main ()
{
  double R, volume;

  cin >> R;
  volume = ((4.0/3)*n*(R*R*R));
  cout << "volume = " << fixed << setprecision(3) << volume << endl;
  return 0;
}
