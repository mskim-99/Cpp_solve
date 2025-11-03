#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;
  int t;

  // 1~23 크기의 배열 미리 선언
  int arr[24] = {0,};

  // n번 입력을 받는다.
  for (int i = 0; i < n; i++)
  {
    cin >> t;
    arr[t] += 1;  // 해당 번호가 불렸다면 번호에 해당 하는 값 +1
  }
  
  // 1~23 값 출력
  for (int i = 1; i <= 23; i++)
    cout << arr[i] << " ";
  cout << "\n";

  return 0;
}