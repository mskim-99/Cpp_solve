#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  int celsius;
  cin >> celsius;
  float fahrenheit = (9.0 / 5) * celsius + 32;
  cout << fixed << setprecision(3) << fahrenheit << "\n";

  return 0;
}