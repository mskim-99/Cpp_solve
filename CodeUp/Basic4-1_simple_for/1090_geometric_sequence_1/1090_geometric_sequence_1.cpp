#include <iostream>
using namespace std;

int main()
{
  long long start, gap, end;
  cin >> start >> gap >> end;
  long long value = start;

  // 1부터 end 까지 start * gap 만큼의 수열 값 계산
  for (int i = 1; i < end; i++)
  {
    value *= gap;
  }
  cout << value << "\n";

  return 0;
}