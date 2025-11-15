#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;
  int value;
  int arr[51] = {0,}; // 충분히 큰 배열 생성

  // n-1번 반복하며 해당 값에 대한 인덱스 값에 1추가
  for (int i = 1; i < n; i++)
  {
    cin >> value;
    arr[value] += 1;
  }

  // 만약 인덱스의 값이 0이라면 잃어버린 카드
  for (int j = 1; j < n+1; j++)
  {
    if (arr[j] == 0)
      cout << j << "\n";
  }

  return 0;
}