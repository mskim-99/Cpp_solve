#include <iostream>
#include <string>
using namespace std;

int main()
{
  int n;
  cin >> n;
  string star = "*";

  // 1부터 n까지 1씩 증가하면서 별찍기
  for (int i = 1; i <= n; i++)
  {
    for (int j = 0; j < i; j++)
      cout << star;
    cout << "\n";
  }

  // n-1 부터 1까지 1씩 감소하면서 별찍기
  for (int k = n-1; k > 0; k--)
  {
    for (int l = k; l > 0; l--)
      cout << star;
    cout << "\n";
  }

  return 0;
}

/*
input : 2

*
**
*

*/