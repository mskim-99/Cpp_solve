#include <iostream>
using namespace std;

int main()
{
  int year, month, day;
  cin >> year >> month >> day;
  int value = year + month + day;

  value = value / 100;
  int result = value % 10;
  if (result % 2 == 0)
    cout << "대박" << "\n";
  else
    cout << "그럭저럭" << "\n";

  return 0;
}