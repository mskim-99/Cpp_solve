#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;
  int value;

  // 입력받은 n까지 반복 실행
  for (int i = 1; i <= n; i++)
  {
    cin >> value;
    // 만약 n이 1이라면 첫번째, 마지막, 중간값 동일한 값 출력
    if (n == 1)
    {
      cout << value << " " << value << " " << value << "\n";
      break;
    }

    // 만약 첫 번째 또는 마지막 이라면 입력 값 출력
    // 첫 번째, 마지막이 아니고 중간 값이라면 입력 값 출력 (입력 값은 항상 홀수)
    if ((i == 1) || (i == n))
      cout << value << " ";
    else if (i == n / 2 + 1)
      cout << value << " ";
  }
  cout << "\n";

  return 0;
}