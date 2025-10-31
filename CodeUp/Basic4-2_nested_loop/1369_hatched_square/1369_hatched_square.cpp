#include <iostream>
#include <string>
using namespace std;

int main()
{
  int n, k;
  cin >> n >> k;
  string star = "*";

  // 전체 n 만큼 반복하면서 별 찍기
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= n; j++)
    { 
      // 첫 줄과 마지막줄 별 출력
      if ((i == 1) || (i == n))
        cout << star;
      // 왼쪽 세로 첫 줄과 오른쪽 마지막 줄 별 출력
      else if ((j == 1) || (j == n))
        cout << star;
      // i + j의 위치가 3의 배수라면 별 출력
      // i, j 반복문의 시작을 1로 했기 때문에 -1를 해야 좌표가 맞는다
      else if ((i + j - 1) % k == 0)
        cout << star;
      else
        cout << " ";
    }
    cout << "\n";
  }

  return 0;
}