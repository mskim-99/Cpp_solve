#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;
  int value = 1;

  // 입력된 값을 1씩 줄여가며 value에 누적 곱 계산
  for (int i = n; i > 0; i--)
    value *= i;

  cout << value << "\n";

  return 0;
}