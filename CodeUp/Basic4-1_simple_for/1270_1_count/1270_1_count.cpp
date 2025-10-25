#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;
  int count = 1;  // 원활한 계산을 위해 1을 기본 값으로 설정

  // n / 10 이 맨끝 자리 1 카운팅
  // 만약에 나머지가 0 이란 소리는 아직 새로운 1에 도달하지 못했단 뜻
  if (n % 10 != 0)
    count += n / 10;
  else
    count += n / 10 - 1;

  cout << count << "\n";

  return 0;
}