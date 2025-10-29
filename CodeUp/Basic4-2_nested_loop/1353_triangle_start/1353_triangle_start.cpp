#include <iostream>
#include <string>
using namespace std;

int main()
{
  int n;
  cin >> n;
  string star = "*";

  for (int i = 0; i < n; i++)
  {
    // 1개씩 *을 추가하면서 출력
    cout << star << "\n";
    star += "*";
  }

  return 0;
}