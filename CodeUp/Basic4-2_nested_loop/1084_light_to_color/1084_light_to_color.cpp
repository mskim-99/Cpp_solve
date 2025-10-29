#include <iostream>
using namespace std;

int main()
{
  int r, g, b;
  cin >> r >> g >> b;
  int count = 0;

  // rgb 색 정보 경우의 수 출력
  for (int i = 0; i < r; i++)
  {
    for (int j = 0; j < g; j++)
    {
      for (int k = 0; k < b; k++)
      {
        cout << i << " " << j << " " << k << "\n";
        count ++;
      }
    }
  }
  // 총 경우의 수 개수 출력
  cout << count << "\n";

  return 0;
}