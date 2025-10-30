#include <iostream>
#include <string>
using namespace std;

int main()
{
  int n;
  cin >> n;
  string star = "**";

  // 전체 n 만큼 반복
  for (int i = 0; i < n; i++)
  { 
    // i번째 만큼 공백 출력
    for (int j = 0; j < i; j++)
      cout << " ";

    // 별 출력
    cout << star << "\n";
  }

  return 0;
}