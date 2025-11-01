#include <iostream>
#include <string>
using namespace std;

int main()
{
  int h, r;
  cin >> h >> r;
  string star = "*";

  // 전체 r번 반복
  for (int l = 0; l < r; l++)
  { 
    // 아래에서 위로 올라가는 방향
    for (int i = 0; i < h; i++)
    {
      for (int j = 0; j < i; j++)
        cout << " ";
      cout << star << "\n";
    }
    // 위에서 아래로 내려오는 방향
    for (int i = h-1; i > 0; i--)
    {
      for (int j = i-1; j > 0; j--)
        cout << " ";
      cout << star << "\n";
    }
  }

  return 0;
}