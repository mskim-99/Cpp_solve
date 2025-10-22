#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;

  // 1부터 n까지 반복
  // 3의 배수라면 출력하지 말고 스킵
  for (int i = 1; i <= n; i++)
  {
    if (i % 3 == 0)
      continue;
    else
      cout << i << " ";
  }

  return 0;
}