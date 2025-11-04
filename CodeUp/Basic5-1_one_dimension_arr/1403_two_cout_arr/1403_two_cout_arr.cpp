#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;
  int arr[101] = {0,};  // 충분히 큰 배열 생성
  int value;

  // n번 반복하며 배열에 값 저장
  for (int i = 0; i < n; i++)
  {
    cin >> value;
    arr[i] = value;
  }

  // n번까지의 배열을 두번 출력
  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < n; j++)
      cout << arr[j] << "\n";
  }

  return 0;
}