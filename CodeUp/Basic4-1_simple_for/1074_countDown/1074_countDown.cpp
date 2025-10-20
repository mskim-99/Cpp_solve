#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;

  // n이 0이 아니라면 무한 반복
  // 1까지 출력하기 위해 출력 후 n을 1 감소시킴
  while(n != 0)
  {
    cout << n << "\n";
    n--;
  }

  return 0;
}