#include <iostream>
using namespace std;

int main()
{
  int a, b, c, d;
  cin >> a >> b >> c >> d;

  int yutnori = a + b + c + d;

  // 1은 뒤집어진 상태, 하나도 안뒤집어진 상태(0)는 '모'
  switch (yutnori)
  {
  case 1:
    cout << "도" << "\n";
    break;
  case 2:
    cout << "개" << "\n";
    break;
  case 3:
    cout << "걸" << "\n";
    break;
  case 4:
    cout << "윷" << "\n";
    break;
  
  default:
    cout << "모" << "\n";
    break;
  }

  return 0;
}