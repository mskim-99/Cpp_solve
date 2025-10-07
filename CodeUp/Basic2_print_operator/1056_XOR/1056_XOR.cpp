#include <iostream>
using namespace std;

int main()
{
  int a, b;
  cin >> a >> b;

  // 참과 거짓을 반대로 출력
  // 둘 다 1 일 경우 0 || 0 이므로 0
  // 둘 다 0 일 경우 0 || 0 이므로 0
  // 둘 중 하나라도 1인 경우에  0 || 1 또는 1 || 0 이 된다.
  // -> 두 수 a, b에 대해 참과 거짓이 다를 경우에만 1이 출력된다.
  cout << ((a && !b) || (!a && b)) << "\n";

  return 0;
}