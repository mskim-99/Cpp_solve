#include <iostream>
using namespace std;

int main()
{
  int n;  // n단 출력
  cin >> n;

  // 구구단 단 수 만큼 별찍기
  for (int i = 1; i < 10; i++)
  {
    for (int j = 0; j < i*n; j++)
      cout << '*';
    cout << "\n";
  }

  return 0;
}