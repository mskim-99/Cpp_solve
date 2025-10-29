#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;

  // n * n 별로 된 사각형 출력
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
      cout << '*';
    cout << "\n";
  }

  return 0;
}