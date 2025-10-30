#include <iostream>
#include <string>
using namespace std;

int main()
{
  int n;
  cin >> n;
  string star = "*";

  // 홀수 부분만 피라미드 별찍기
  for (int i = 1; i <= n; i+=2)
  {
    // 가장 앞쪽만 공백이 있으면 되므로 (n-i)/2 만큼 공백 출력
    for (int j = 0; j < (n-i)/2; j++)
      cout << " ";
    
    // i의 크기 만큼의 별 출력
    for (int k = 0; k < i; k++)
      cout << star;
    cout << "\n";
  }

  return 0;
}

/*
input : 5

  *
 ***
*****

*/