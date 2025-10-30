#include <iostream>
#include <string>
using namespace std;

int main()
{
  int n;
  cin >> n;
  string star = "*";

  // 전체 n번 반복할 반복문
  for (int i = 1; i <= n; i++)
  { 
    // 만약 첫 번째, 마지막 반복이라면
    if ((i == 1) || (i == n))
    {
      // 1부터 n까지 반복하면서 * 출력
      for (int j = 1; j <= n; j++)
        cout << star;
      // 줄바꿈
      cout << "\n";
    }
    // 첫 번째, 마지막 반복이 아니라면
    else
    {
      // 1부터 n까지 반복하면서
      for (int k = 1; k <= n; k++)
      { 
        // 처음과 마지막이라면 * 출력
        if ((k == 1) || (k == n))
        {
          cout << star;
        }
        // 아니라면 공백 출력
        else
          cout << " ";
      }
      cout << "\n";
    }
  }

  return 0;
}

/*
input : 3

***
* *
***

*/