#include <iostream>
using namespace std;

int main()
{
  int a, b;
  cin >> a >> b;

  if ((a % 2 == 0) && (b % 2 == 0))
    cout << "짝수+짝수=짝수" << "\n";
  else if ((a % 2 != 0) && (b % 2 == 0))
    cout << "홀수+짝수=홀수" << "\n";
  else if ((a % 2 == 0) && (b % 2 != 0))
    cout << "짝수+홀수=홀수" << "\n";
  else if ((a % 2 != 0) && (b % 2 != 0))
    cout << "홀수+홀수=짝수" << "\n";

  return 0;
}