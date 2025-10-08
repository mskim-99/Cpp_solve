#include <iostream>
using namespace std;

int main()
{
  int a, b, c;
  cin >> a >> b >> c;

  // 가장 작은 값 출력
  // (a < b) 가 참이라면 a < c를 비교해 값 계산
  // (a < b) 가 거짓이라면 b < c를 비교해 값 계산
  // -1을 a에 입력하면 버그있음..
  cout << ((a < b) ? ((a < c) ? a : c) : ((b < c) ? b : c)) << "\n";

  return 0;
}