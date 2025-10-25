#include <iostream>
using namespace std;

int main()
{
  int k, h;
  cin >> k >> h;
  
  // 짝수라면 10을 곱한 뒤 2를 나눈다
  // 홀수라면 1을 더한 뒤 2를 나눈다
  if (k % 2 == 0)
    k = (k * 10) / 2;
  else
    k = (k + 1) / 2;
  
  if (h % 2 == 0)
    h = (h * 10) / 2;
  else
    h = (h + 1) / 2;

  int sum = k + h;
  cout << sum << "\n";

  return 0;
}