#include <iostream>
using namespace std;

int main()
{
  int season;
  cin >> season;

  switch (season)
  {
  case 3:
  case 4:
  case 5:
    cout << "spring" << "\n";
    break;

  case 6:
  case 7:
  case 8:
    cout << "summer" << "\n";
    break;

  case 9:
  case 10:
  case 11:
    cout << "fall" << "\n";
    break;
  
  // 위 경우에 해당하지 않는다면 winter 출력 (season == 1~12)
  default:
    cout << "winter" << "\n";
    break;
  }

  return 0;
}