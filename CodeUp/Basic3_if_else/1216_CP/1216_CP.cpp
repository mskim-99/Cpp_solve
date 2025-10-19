#include <iostream>
using namespace std;

int main()
{
  int a, b, c;
  cin >> a >> b >> c;

  if ((a + c) < b)
    cout << "advertise" << "\n";
  else if ((a + c) > b)
    cout << "do not advertise" << "\n";
  else
    cout << "does not matter" << "\n";

  return 0;
}