#include <iostream>
using namespace std;

// 둘 다 거짓일 때만 참 출력
int main()
{
  int a, b;
  cin >> a >> b;

  // 둘 다 거짓이라면 !0은 1이 되고 1 && 1은 참이 된다.
  cout << (!a && !b) << "\n";

  return 0;
}