#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;
  int sum = 0;

  // 전체 n만큼 반복
  for (int i = n; i > 0; i--)
  { 
    // j의 크기만큼 누적 합에 저장
    for (int j = i; j > 0; j--)
      sum += j;
  }
  cout << sum << "\n";

  return 0;
}