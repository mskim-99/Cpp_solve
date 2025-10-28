#include <iostream>
using namespace std;

int main()
{
  int n = 5;
  int number;
  int max_value = -10000000;
  int min_value = 10000000;

  for (int i = 0; i < n; i++)
  {
    cin >> number;
    
    // 최대 값 계산
    if (max_value < number)
      max_value = number;

    // 최소 값 계산
    if (min_value > number)
      min_value = number;
  }
  // 첫째 줄에 최댓값, 둘째 줄에 최솟값 출력
  cout << max_value << "\n" << min_value << "\n";

  return 0;
}