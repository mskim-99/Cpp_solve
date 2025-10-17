#include <iostream>
#include <string>
using namespace std;

int main()
{
  int a, b, c;
  cin >> a >> b >> c;
  string result = to_string(a) + to_string(b);

  // c가 10 이라하면 0을 붙여서 문자열 출력
  if (c < 10)
    result += '0' + to_string(c);
  else
    result += to_string(c);
  
    cout << result << "\n";

  return 0;
}