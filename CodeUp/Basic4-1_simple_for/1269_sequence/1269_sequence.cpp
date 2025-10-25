#include <iostream>
using namespace std;

int main()
{
  int a, b, c, n;
  cin >> a >> b >> c >> n;
  int sequence = a;

  // n번째 항의 값 구하기
  for (int i = 1; i < n; i++)
  {
    sequence *= b;
    sequence += c;
  }
  cout << sequence << "\n";

  return 0;
}