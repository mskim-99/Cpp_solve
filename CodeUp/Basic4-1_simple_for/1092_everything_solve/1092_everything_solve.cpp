#include <iostream>
using namespace std;

int main()
{
  int a, b, c;
  cin >> a >> b >> c;
  int day = 1;  // 다 같이 문제 푸는 날

  // 하나라도 나누어 떨어지지 않는다면 day 1증가
  // 최소 공배수를 찾는 과정
  while((day % a != 0) || (day % b != 0) || (day % c != 0))
  {
    day++;
  }
  cout << day << "\n";

  return 0;
}