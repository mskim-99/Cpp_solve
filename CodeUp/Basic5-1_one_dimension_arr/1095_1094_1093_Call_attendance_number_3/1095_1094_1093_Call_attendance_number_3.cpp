#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;
  int arr[10001] = {0,};  // 충분히 큰 배열 생성
  int value;

  // n번 반복하면서 입력값의 번호 값을 1 증가
  for (int i = 0; i < n; i++)
  {
    cin >> value;
    arr[value] += 1;
  }

  // 배열의 처음부터 반복하면서 가장 빠른 값을 출력 후 반복종료
  for (int i = 0; i < 10000; i++)
  {
    if (arr[i] != 0)
    {
      cout << i << "\n";
      break;
    }
  }

  return 0;
}