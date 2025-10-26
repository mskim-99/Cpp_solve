#include <iostream>
#include <string>
using namespace std;

int main()
{
  int a, b;
  cin >> a >> b;
  string s;
  int sum = 0;

  // a부터 b까지 반복 실행
  for (int i = a; i <= b; i++)
  {
    // 만약 첫 번째 값이 홀수라면 +를 제외하고 업데이트
    if ((i == a) && (i % 2 != 0))
    {
      s += to_string(i);
      sum += i;
    }
    // 홀수라면 +와 i값을 문자열로 저장하고 누적합
    else if (i % 2 != 0)
    {
      s += '+';
      s += to_string(i);
      sum += i;
    }
    // 짝수라면 -와 i값을 문자열로 저장하고 마이너스
    else
    {
      s += '-';
      s += to_string(i);
      sum -= i;
    }
  }

  // 부등호와 최종 계산 값을 문자열에 붙이고 출력
  s += '=';
  s += to_string(sum);
  cout << s << "\n";

  return 0;
}