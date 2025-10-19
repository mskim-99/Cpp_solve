#include <iostream>
using namespace std;

int main()
{
  int a, b, c;
  cin >> a >> b >> c;

  // 삼각형이 아닌지 먼저 판별을 한다
  // 다른 두변의 합이 한 변의 길이 보다 커야한다.
  if ((a + b <= c) || (a + c <= b) || (b + c <= a))
    cout << "삼각형아님" << "\n";
  else if ((a == b) && (b == c))
    cout << "정삼각형" << "\n";
  else if ((a == b) || (a == c) || (b == c))
    cout << "이등변삼각형" << "\n";
  else if (((a * a + b * b) == c * c) ||
            ((a * a + c * c) == b * b) ||
            ((b * b + c * c) == a * a))
    cout << "직각삼각형" << "\n";
  else
    cout << "삼각형" << "\n";

  return 0;
}