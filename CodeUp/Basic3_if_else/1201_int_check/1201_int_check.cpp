#include <iostream>
using namespace std;

int main()
{
  int number;
  cin >> number;

  if (number > 0)
    cout << "양수" << "\n";
  else if (number == 0)
    cout << number << "\n";
  else  
    cout << "음수" << "\n";

  return 0;
}