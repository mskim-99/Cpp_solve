#include <iostream>
#include <string>
using namespace std;

int main()
{
  // h 높이, k 밑변, d 방향정보
  int h, k;
  char d;
  cin >> h >> k >> d;
  string star = "*";

  // 전체 h만큼의 별찍기
  for (int i = 1; i <= h; i++)
  { 
    // L이라면 왼쪽아래 공백
    if (d == 'L')
    {
      for (int j = 1; j < i; j++)
        cout << " ";
    }
    // R이라면 오른쪽 아래 공백
    else
    {
      for (int j = i; j < h; j++)
        cout << " ";
    }

    // k 크기 만큼 별찍기
    for (int j = 1; j <= k; j++)
      cout << star;
    
    // 1회 반복이 끝나면 줄바꿈
    cout << "\n";
  }

  return 0;
}