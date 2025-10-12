#include <iostream>
using namespace std;

int main()
{
  int a, b;
  cin >> a >> b;

  // 더 큰 값에서 작은 값 뺀 값 출력
  if (a > b)
    cout << (a - b) << "\n";
  else if (a < b)
    cout << (b - a) << "\n";
  else
    cout << (a - b) << "\n";

  return 0;
}