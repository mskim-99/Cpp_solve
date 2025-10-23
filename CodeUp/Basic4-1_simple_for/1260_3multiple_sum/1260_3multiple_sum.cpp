#include <iostream>
using namespace std;

int main()
{
  int a, b;
  cin >> a >> b;
  int sum = 0;  // 누적합

  // a부터 b까지 3의 배수만 누적합 계산
  for (int i = a; i <= b; i++)
  {
    if (i % 3 == 0)
      sum += i;
  }
  cout << sum << "\n";

  return 0;
}