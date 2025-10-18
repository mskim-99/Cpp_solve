#include <iostream>
using namespace std;

int main()
{
  int a, b;
  cin >> a >> b;
  int result;

  // 만약에 배수라면 나눈 값을 저장하고 계산식을 출력한다.
  if (a % b == 0)
  {
    result = a / b;
    cout << b << "*" << result << "=" << a << "\n";
  }
  else if (b % a == 0)
  {
    result = b / a;
    cout << a << "*" << result << "=" << b << "\n";
  }
  else
    cout << "none" << "\n";

  return 0;
}