#include <iostream>
#include <string>
using namespace std;

int main()
{
  int a, b, c;
  cin >> a >> b >> c;
  string result = to_string(a);

  if (b < 10)
    result += "0" + to_string(b);
  else
    result += to_string(b);
  
  if (c < 10)
    result += "00" + to_string(c);
  else if (c < 100)
    result += "0" + to_string(c);
  else
    result += to_string(c);
  
  cout << result << "\n";

  return 0;
}