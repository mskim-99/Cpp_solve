#include <iostream>
using namespace std;

int main()
{
  int start, end;
  cin >> start >> end;

  // 시작값 부터 끝 값 까지의 구구단 출력
  for (int i = start; i <= end; i++)
  {
    for (int j = 1; j <= 9; j++)
      cout << i << "*" << j << "=" << (i * j) << "\n";
  }

  return 0;
}