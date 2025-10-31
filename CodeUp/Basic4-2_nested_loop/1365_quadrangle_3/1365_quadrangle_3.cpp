#include <iostream>
#include <string>
using namespace std;

int main()
{
  int n;
  cin >> n;
  string star = "*";

  // 전체 n 만큼 반복
  for (int i = 1; i <= n; i++)
  { 
    // 맨 첫줄과 마지막줄 만드는 부분
    if ((i == 1) || (i == n))
    {
      for (int j = 1; j <= n; j++)
        cout << star;
      cout << "\n";
    }
    // 첫 줄과 마지막줄이 아니라면
    else
    {
      for (int k = 1; k <= n; k++)
      { 
        // 왼쪽 오른쪽 박스를 만드는 부분
        if ((k == 1) || (k == n))
          cout << star;
        // 안에 X자를 만드는 부분
        else if ((k == i) || (k + i == n + 1))
          cout << star;
        // 공백을 표시하는 부분
        else
        {
          cout << " ";
        }
      }
      cout << "\n";
    }
  }

  return 0;
}