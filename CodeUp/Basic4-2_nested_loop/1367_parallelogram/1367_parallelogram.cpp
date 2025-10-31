#include <iostream>
#include <string>
using namespace std;

int main()
{
  int n;
  cin >> n;
  string star = "*";

  // n 만큼 별찍기를 반복
  for (int i = 1; i <= n; i++)
  { 
    // 공백을 출력하는 부분
    for (int j = i; j < n; j ++)
      cout << " ";
    
    // 별을 출력하는 부분
    for (int k = 1; k <= n; k++) 
      cout << star;
    
    // 한 번 반복이 끝났다면 줄바꿈
    cout << "\n";
  }
  

  return 0;
}