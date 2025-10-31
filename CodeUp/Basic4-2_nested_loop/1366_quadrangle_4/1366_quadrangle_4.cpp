#include <iostream>
#include <string>
using namespace std;

int main()
{
  int n;
  cin >> n;
  string star = "*";

  // 전체 별을 찍는 부분
  for (int i = 1; i <= n; i++)
  { 
    // 첫 줄과 마지막 줄 찍는 부분
    if ((i == 1) || (i == n))
    {
      for (int j = 1; j <= n; j++)
        cout << star;
      cout << "\n";
    }
    // 첫 줄과 마지막을 제외한 별찍기
    else
    {
      for (int k = 1; k <= n; k++)
      { 
        // 우측 좌측 테두리 부분
        if ((k == 1) || (k == n))
          cout << star;
        // 가운데 X 부분
        else if ((k == i) || (k + i == n + 1))
          cout << star;
        // 가운데 + 부분
        else if ((i == (n + 1)/2) || (k == (n + 1)/2))
          cout << star;
        else
          cout << " ";
      }
      cout << "\n";
    }
  }

  return 0;
}