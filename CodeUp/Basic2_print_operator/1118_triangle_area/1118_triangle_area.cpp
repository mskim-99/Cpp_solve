#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  float a, b;
  cin >> a >> b;
  cout << fixed << setprecision(1) << (a * b / 2) << "\n";

  return 0;
}