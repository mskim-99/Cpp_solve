#include <iostream>
using namespace std;

int main()
{
  float ball;
  cin >> ball;
  if (50 <= ball && ball <= 60)
    cout << "win" << "\n";
  else
    cout << "lose" << "\n";

  return 0;
}