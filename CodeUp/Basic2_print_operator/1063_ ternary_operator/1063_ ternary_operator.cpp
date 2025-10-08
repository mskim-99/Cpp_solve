#include <iostream>
using namespace std;

int main()
{
  int a, b;
  cin >> a >> b;

  // 3항 연산자
  // ? 앞 조건식이 참이면 (앞:뒤) 앞 출력, 거짓이면 뒤 출력
  cout << (a > b ? a : b) << "\n";

  return 0;
}