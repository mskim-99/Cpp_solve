#include <iostream>
#include <cmath>
#include <iomanip>
#include <algorithm>
using namespace std;

int main()
{
  double a, b;
  cin >> a >> b;
  double plus_ab = a + b;
  double minus_ab = a - b;
  double minus_ba = b - a;
  double pow_a = pow(a, b); // a^b
  double pow_b = pow(b, a); // b^a
  double multi = a * b;

  double max_value = max({plus_ab, pow_a, pow_b, multi, minus_ab, minus_ba});
  
  cout << fixed << setprecision(6) << max_value << "\n";


  return 0;
}