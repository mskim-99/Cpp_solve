#include <iostream>
using namespace std;

int main()
{
  int age;
  cin >> age;

  int value = 113 - age;
  if (value < 100)
    cout << value << " " << 1 << "\n";
  else
  {
    value = value % 100;
    cout << value << " " << 3 << "\n";
  }

  return 0;
}