#include <iostream>
using namespace std;

int main()
{
  int a, b, c, d, e, f, g, h, i, j;
  cin >> a >> b >> c >> d >> e >> f >> g >> h >> i >> j;

  // 5의 배수가 있다면 출력하고 없으면 0 출력
  // 배열, 백터 없이 풀이
  if (a % 5 == 0)
    cout << a << "\n";
  else if (b % 5 == 0)
    cout << b << "\n";
  else if (c % 5 == 0)
    cout << c << "\n";
  else if (d % 5 == 0)
    cout << d << "\n";
  else if (e % 5 == 0)
    cout << e << "\n";
  else if (f % 5 == 0)
    cout << f << "\n";
  else if (g % 5 == 0)
    cout << g << "\n";
  else if (h % 5 == 0)
    cout << h << "\n";
  else if (i % 5 == 0)
    cout << i << "\n";
  else if (j % 5 == 0)
    cout << j << "\n";
  else
    cout << 0 << "\n";

  return 0;
}