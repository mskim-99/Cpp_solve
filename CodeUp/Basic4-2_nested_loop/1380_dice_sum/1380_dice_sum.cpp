#include <iostream>
using namespace std;

int main()
{
  int dice_sum;
  cin >> dice_sum;
  int a, b;

  for (int i = 1; i <= dice_sum; i++)
  { 
    // 첫 번째 주사위가 6보다 작거나 같다면 i
    // 아니라면 주사위 눈금을 초과하는 값 대입
    if (i <= 6)
      a = i;
    else
      a = 7;
    
    // 구하고자 하는 값에서 첫 번째 주사위 값을 뺀 값이
    // 0보다 크고 6보다 같거나 작을 때와 첫 번째 주사위 값이 6과 같거나 작다면 주사위 값 출력
    if ((dice_sum - a) > 0 && (dice_sum - a) <= 6 && a <= 6)
    {
      b = dice_sum - a;
      cout << a << " " << b << "\n";
    }
  } 

  return 0;
}