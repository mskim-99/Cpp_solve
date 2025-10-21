#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;
  int sum = 0;

  // n까지 반복하면서 만약 i가 짝수라면 sum에 합산
  for (int i = 0; i <= n; i++)
  {
    if (i % 2 == 0)
      sum += i; 
  }
  cout << sum << "\n";

  return 0;
}