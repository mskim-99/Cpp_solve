#include <iostream>
using namespace std;

int main()
{
  // 반드시 a가 b보다 같거나 작게 입력된다.
  int a, b;
  cin >> a >> b;
  int sum = 0;

  // a부터 b까지 반복
  // 홀수라면 더하고, 짝수라면 뺀다
  // 최종 값 출력
  for (int i = a; i <= b; i++)
  {
    if (i % 2 !=0)
      sum += i;
    else
      sum -= i;
  }
  cout << sum << "\n";

  return 0;
}