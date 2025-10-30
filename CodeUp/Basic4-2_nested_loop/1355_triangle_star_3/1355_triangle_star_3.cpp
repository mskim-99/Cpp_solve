#include <iostream>
#include <string>
using namespace std;

int main()
{
  int n;
  cin >> n;
  string star = "*";

  // 역삼각형으로 별찍기
  for (int i = n; i > 0; i--)
  {
    for (int j = i; j > 0; j--)
      cout << star;
    
    cout << "\n";  
    
    // 1칸씩 늘리면서 공백 출력
    for (int k = 0; k < n-i+1; k++)
      cout << " ";
  }

  return 0;
}

/*
input : 3

***
 **
  *

*/