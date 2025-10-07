#include <iostream>
using namespace std;

// a, b 참과 거짓이 같을 때만 1 출력
int main()
{
  int a, b;
  cin >> a >> b;

  // 참과 거짓을 같을 때만 1을 출력하기 위해서는 
  // 둘 다 1인 경우 1 && 1이 되므로 1
  // 둘 다 0인 경우 1 && 1이 되므로 1
  // 둘 중 하나라도 1인 경우에는 0 && 0 이 되므로 불가능
  cout << ((a || !b) && (!a || b)) << "\n";

  return 0;
}