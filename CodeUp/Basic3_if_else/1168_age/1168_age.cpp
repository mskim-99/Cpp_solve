#include <iostream>
using namespace std;

int main()
{
  int year, info;
  cin >> year >> info;
  int value;

  switch (info)
  {
  case 1:
  case 2:
    value = 100 - (year / 10000) + 12 + 1;
    cout << value << "\n";
    break;
  
  case 3:
  case 4:
    value = 12 - (year / 10000) + 1;
    cout << value << "\n";
    break;
  }

  return 0;
}