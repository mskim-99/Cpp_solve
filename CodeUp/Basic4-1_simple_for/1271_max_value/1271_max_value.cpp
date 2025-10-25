#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;
  int max_value = 0;
  int number;

  // n 만큼 숫자를 입력 받는다.
  // 입력 받은 값이 현재 값보다 크다면 최대값 갱신
  for (int i = 0; i < n; i++)
  {
    cin >> number;
    if (max_value <= number)
      max_value = number;
  }
  cout << max_value << "\n";

  return 0;
}