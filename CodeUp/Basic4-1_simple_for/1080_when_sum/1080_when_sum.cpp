#include <iostream>
using namespace std;

int main()
{
  int value;
  cin >> value;
  int sum = 0;
  int index = 0;

  // index값을 1씩 증가시키면서
  // sum에 합산하고 입력값과 동일한지 판단
  while (sum < value)
  {
    index++;
    sum += index;
  }
  cout << index << "\n";

  return 0;
}