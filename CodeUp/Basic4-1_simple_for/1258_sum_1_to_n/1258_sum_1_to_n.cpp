#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;
  int index = 1;  // 증가량
  int sum = 0;  // 누적합

  // 1부터 n까지의 누적합 계산
  while (index <= n)
  {
    sum += index;
    index++;
  }
  cout << sum << "\n";


  return 0;
}