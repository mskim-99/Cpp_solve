#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;
  int value = 0;

  // 입력되는 숫자의 구구단 출력
  for (int i = 1; i <= 9; i++)
  {
    value = n * i;
    cout << n << "*" << i << "=" << value << "\n";
  }

  return 0;
}