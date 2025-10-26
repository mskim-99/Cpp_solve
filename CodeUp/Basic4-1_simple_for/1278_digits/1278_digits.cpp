#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;
  int count = 0;

  // 자리 수 계산을 위해 10으로 나누는 것을 반복
  // 10으로 나누고 자리수 계산을 위해 count + 1
  while (n > 0)
  {
    n /= 10;
    count++;
  }
  cout << count << "\n";

  return 0;
}