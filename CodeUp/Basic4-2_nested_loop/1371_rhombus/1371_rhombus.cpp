#include <iostream>
#include <string>
using namespace std;

int main()
{
  int n;
  cin >> n;
  string star = "*";

  // 왼쪽 전체 부분
  for (int i = 1; i <= n; i++)
  { 
    // 왼쪽 상단 마름모 부분
    for (int j = n; j > i; j--)
      cout << " ";

    cout << star;

    // 왼쪽 하단 마름모 부분
    for (int k = 2; k < i+i; k++)
      cout << " ";

    cout << star;

    cout << "\n";
  }

  // 오른쪽 전체 부분
  for (int i = 1; i <= n; i++)
  { 
    // 우측 상단 부분
    for (int j = 1; j < i; j++)
      cout << " ";
    cout << star;

    // 우측 하단 부분
    for (int k = 2*n; k > i+i; k--)
      cout << " ";

    cout << star;

    cout << "\n";
  }

  return 0;
}

/*
5

    **
   *  *
  *    *
 *      *
*        *
*        *
 *      *
  *    *
   *  *
    **
*/