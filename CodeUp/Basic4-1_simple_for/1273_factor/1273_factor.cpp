#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;

  // n의 약수를 출력
  for (int i = 1; i <= n; i++)
  {
    if (n % i == 0)
      cout << i << " ";
  }
  cout << "\n";

  return 0;
}