#include <iostream>
using namespace std;

int main()
{
  // a,b,c는 터널의 높이, 차는 170cm
  int a, b, c;
  int car = 170;
  cin >> a >> b >> c;

  // 자동차의 높이보다 터널이 작으면 해당 터널을 출력
  // 먼저 충돌하는 터널만 출력한다.
  // 충돌하지 않는다면 PASS 출력
  if (a <= car)
    cout << "CRASH" << " " << a << "\n";
  else if (b <= car)
    cout << "CRASH" << " " << b << "\n";
  else if (c <= car)
    cout << "CRASH" << " " << c << "\n";
  else
    cout << "PASS" << "\n";

  return 0;
}