#include <iostream>
using namespace std;

int main()
{
  int n, m;
  cin >> n >> m;

  // 1부터 n, m 까지 고를 수 있는 모든 경우의 수
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= m; j++)
      cout << i << " " << j << "\n";
  }

  return 0;
}