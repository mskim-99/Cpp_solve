#include <iostream>
using namespace std;

int main()
{
  int n;

  // 0이 입력 될 때 까지 무한 반복
  while(true)
  {
    cin >> n;
    if (n == 0)
      break;
    else
      cout << n << "\n";
  }

  return 0;
}