#include <iostream>
using namespace std;

int main()
{
  int value;
  cin >> value;
  int sum = 0;
  int i = 1;

  // 1부터 차례대로 sum에 합산하다가
  // value를 넘는다면 sum 값 출력
  while (sum < value)
  {
    sum += i;
    i++;
  }
  cout << sum << "\n";
  

  return 0;
}