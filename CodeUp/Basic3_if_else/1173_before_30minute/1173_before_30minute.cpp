#include <iostream>
using namespace std;

int main()
{
  int hour, minute;
  cin >> hour >> minute;
  int value;

  // minute가 30 보다 작다면 hour를 줄여야 한다
  // 먼저 분이 작은지 검사하고 24시 인지 검사 (hour == 0~23범위)
  if (minute < 30)
  {
    if (hour == 0)
    {
      value = 30 - minute;
      hour = 23;
      minute = 60 - value;
    }
    else
    {
      value = 30 - minute;
      hour -= 1;
      minute = 60 - value;
    }
  }
  else
    minute -= 30;

  cout << hour << " " << minute << "\n";
  

  return 0;
}