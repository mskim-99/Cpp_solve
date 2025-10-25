#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;
  int sum = 0;
  int number;

  // n의 수 만큼 숫자를 입력 받고 sum에 누적합산
  for (int i = 0; i < n; i++)
  {
    cin >> number;
    sum += number;
  }
  cout << sum << "\n";

  return 0;
}