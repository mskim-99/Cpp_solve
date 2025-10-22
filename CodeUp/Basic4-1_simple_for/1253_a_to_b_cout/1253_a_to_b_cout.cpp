#include <iostream>
using namespace std;

int main()
{
  int a, b;
  cin >> a >> b;

  // a보다 b가 크다면 a부터 b까지 1씩 증가하면서 공백으로 띄워서 출력
  // else 는 반대로
  if (a < b)
  {
    for (int i = a; i <= b; i++)
      cout << i << " ";
    cout << "\n";
  }
  else
  {
    for (int i = b; i <= a; i++)
      cout << i << " ";
    cout << "\n";
  }

  return 0;
}