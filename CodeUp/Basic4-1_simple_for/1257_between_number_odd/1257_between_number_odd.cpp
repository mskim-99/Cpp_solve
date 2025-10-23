#include <iostream>
using namespace std;

int main()
{
  int a, b;
  cin >> a >> b;

  // a부터 b까지 홀수만 공백으로 띄워서 출력
  for (int i = a; i <= b; i++)
  {
    if (i % 2 != 0)
      cout << i << " ";
  }
  cout << "\n";

  return 0;
}