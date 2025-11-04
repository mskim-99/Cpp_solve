#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;
  int arr[1001] = {0,};
  int value;

  // n번 반복하면서 값 입력 받기
  for (int i = 0; i < n; i++)
  {
    cin >> value;
    arr[i] = value;
  }

  // n번 반복하면서 배열 출력
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    { 
      // 로테이션을 위한 인덱스 조정
      int idx = (n + i + j) % n;
      cout << arr[idx] << " ";
    }
    cout << "\n";
  }

  return 0;
}