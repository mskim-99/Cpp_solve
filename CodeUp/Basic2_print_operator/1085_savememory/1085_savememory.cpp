#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  double h, b, s, c;
  cin >> h >> b >> s >> c;

  double value = (h * b * s * c) / 8.0 / 1024.0 / 1024.0;
  cout << fixed << setprecision(1) << value << " MB" << "\n";

  return 0;
}