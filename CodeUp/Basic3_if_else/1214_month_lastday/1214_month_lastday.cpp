#include <iostream>
using namespace std;

int main()
{
  int arr[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  int year, a;
  cin >> year >> a;

  // 만약 2월일 경우 윤달인지 확인한다.
  // 만약 윤달일 경우 2월을 마지막 날은 29일로 변경
  if (a == 2)
  {
    if (year % 400 == 0)
      arr[2] = 29;
    else if ((year % 4 == 0) && (year % 100 != 0))
      arr[2] = 29;
  }
  cout << arr[a] << "\n";

  return 0;
}