#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;
  int arr[1001] = {0,}; // 충분히 큰 배열 선언
  int value;

  // n번 반복하며 0번 인덱스 부터 차례대로 값 저장
  for (int i = 0; i < n; i++)
  {
    cin >> value;
    arr[i] = value;
  }

  // n-1번 인덱스 부터 0번까지 거꾸로 출력
  for (int i = n-1; i >= 0; i--)
    cout << arr[i] << " ";
  cout << "\n";

  return 0;
}