#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;

  // 위쪽 삼각형 출력 부분
  for (int i = 1; i <= n; i++)
  {
    for (int j = n-i; j > 0; j--)
      cout << " ";
    for (int k = 1; k < 2*i; k++)
      cout << "*";
    for (int j = n-i; j > 0; j--)
      cout << " ";
    cout << "\n";
  }

  // 아래쪽 삼각형 출력 부분
  for (int i = n-1; i >= 1; i--)
  {
    for (int j = n-i; j > 0; j--)
      cout << " ";
    for (int k = 1; k <= 2*i-1; k++)
      cout << "*";
    for (int j = n-i; j > 0; j--)
      cout << " ";
    cout << "\n";
  }

  return 0;
}

/*
input : 3

  *  
 *** 
*****
 *** 
  *  

*/