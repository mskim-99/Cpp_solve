#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;
  int sum = 0;
  int number;

  // n 만큼 숫자를 입력받고
  // 5의 배수만 누적합 계산
  for (int i = 0; i < n; i++)
  {
    cin >> number;
    if (number % 5 == 0)
      sum += number;
  }
  cout << sum << "\n";


  return 0;
}