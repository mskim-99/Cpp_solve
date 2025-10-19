#include <iostream>
using namespace std;

int main()
{
  float a, b, c, d;
  cin >> a >> b >> c >> d;

  if ((a / b) > (c / d))
    cout << ">" << "\n";
  else if ((a / b) < (c / d))
    cout << "<" << "\n";
  else
    cout << "=" << "\n";

  return 0;
}