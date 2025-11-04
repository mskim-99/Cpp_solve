#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;
  int arr[10001] = {0,};  // 충분히 큰 배열 생성
  int value;

  // n번 반복하면서 배열에 값 저장
  for (int i = 0; i < n; i++)
  {
    cin >> value;
    arr[i] = value;
  }

  // n번 입력받는 값 거꾸로 출력
  for (int i = n-1; i >= 0; i--)
    cout << arr[i] << " ";
  cout << "\n";

  return 0;
}