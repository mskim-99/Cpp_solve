#include <iostream>
using namespace std;

int main()
{
  // n : 가로 길이, m : 세로 길이
  int n, m;
  cin >> n >> m;

  // 전체 m번 만큼의 반복 을 하면서 틀 생성
  for (int i = 0; i < m; i++)
  { 
    // 첫 번째 줄과 마지막 번째 줄 이라면
    if ((i == 0) || (i == m-1))
    {
      for (int j = 0; j < n; j++)
        // 첫 번째 줄과 마지막 줄의 첫 번째 좌표와 마지막 좌표라면
        if ((j == 0) || (j == n-1))
          cout << "+";
        else
          cout << "-";
    }
    // | 를 출력 하는 부분
    // 첫 번째 줄과 마지막 줄이 아니라면
    else if ((i > 0) || (i < n-1))
    {
      for (int j = 0; j < n; j++)
      { 
        // 첫 번째 좌표와 마지막 좌표라면 | 아니라면 공백 출력
        if ((j == 0) || (j == n-1))
          cout << "|";
        else
          cout << " ";
      }
    }
    else
      cout << " ";
    // 각 반복이 끝날 때 마다 줄바꿈
    cout << "\n";
  }

  return 0;
}

/*
input : 4 3

+--+
|  |
+--+
*/