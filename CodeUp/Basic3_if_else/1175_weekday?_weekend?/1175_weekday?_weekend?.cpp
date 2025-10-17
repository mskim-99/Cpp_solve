#include <iostream>
using namespace std;

int main()
{
  int day;
  cin >> day;

  // 7로 나눈 나머지에 따라 주말, 주중 판별
  switch (day % 7)
  {
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
    cout << "주중" << "\n";
    break;
  
  default:
    cout << "주말" << "\n";
    break;
  }

  return 0;
}