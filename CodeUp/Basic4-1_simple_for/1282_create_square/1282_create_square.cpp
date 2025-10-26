#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;
  int value = 0;  // 값을 비교할 변수
  int i = 0;      // 제곱 계산을 할 변수
  int k = 0;      // 제곱근

  while (value < n)
  {
    i++;
    value = i * i;  // value가 n보다 커지는 시점을 찾는다
  }
  i -= 1; // 최종 제곱근은 value가 n보다 커지기 전이므로 1을 뺀다
  k = n - (i * i);  // n에서 가장 큰 제곱수를 뺀다

  cout << k << " " << i << "\n";

  return 0;
}