#include <iostream>
#include <string>
using namespace std;

int main()
{
  int a, b;
  cin >> a >> b;
  string s; // 문자열을 누적할 변수
  int sum = 0;

  // a부터 b까지 반복
  for (int i = a; i <= b; i++)
  { 
    // 홀수라면 +와 i를 문자열로 변환해서 저장 후 누적합에 더한다.
    if (i % 2 != 0)
    {
      s += '+';
      s += to_string(i);
      sum += i;
    }
    // 짝수라면 -와 i를 문자열로 변환해서 저장 후 누적합에 뺀다.
    else
    {
      s += '-';
      s += to_string(i);
      sum -= i;
    }
  }
  // 반복문이 종료되면 부등호를 붙인다.
  s += '=';

  // 누적합이 양수라면 +를 붙이지 않는다.
  if (sum > 0 )
    s += to_string(sum);
  else  
    s += to_string(sum);

  cout << s << "\n";

  return 0;
}