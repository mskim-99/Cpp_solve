#include <iostream>
using namespace std;

int main()
{
  long long start, m, d, end;
  cin >> start >> m >> d >> end;
  long long value = start;

  // 1부터 end까지 m을 곱하고 d를 더한 수열 값중 end 번째 값 추출
  for (int i = 1; i < end; i++)
  {
    value *= m;
    value += d;
  }
  cout << value << "\n";

  return 0;
}