#include <iostream>
using namespace std;

int main()
{
  int a;
  cin >> a;

  // 짝수면 even, 홀수면 odd출력
  if (a % 2 == 0)
    cout << "even" << "\n";
  else
    cout << "odd" << "\n";

  return 0;
}