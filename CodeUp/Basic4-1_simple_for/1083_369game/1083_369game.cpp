#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;

  // 1부터 n까지 반복하면서
  // 3의 배수라면 'X', 아니라면 i값 출력
  for (int i = 1; i <= n; i++)
  {
    if (i % 3 == 0)
      cout << "X" << " ";
    else
      cout << i << " ";
  }

  return 0;
}