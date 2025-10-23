#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  // 정밀한 숫자 계산을 위한 자료형 double
  double a, b;
  cin >> a >> b;

  // 소수점 2자리 까지 출력
  for (double i = a; i <= b; i+=0.01)
    cout << fixed << setprecision(2) << i << " ";
  cout << "\n";

  return 0;
}