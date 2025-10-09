#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  double w, h, b;
  cin >> w >> h >> b;

  double value = (w * h * b) / 8.0 / 1024.0/ 1024.0;

  cout << fixed << setprecision(2) << value << " MB" << "\n";

  return 0;
}