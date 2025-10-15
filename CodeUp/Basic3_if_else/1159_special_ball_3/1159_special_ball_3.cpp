#include <iostream>
using namespace std;

int main()
{
  int ball;
  cin >> ball;

  if (50 <= ball && ball <= 70)
    cout << "win" << "\n";
  else if (ball % 6 == 0)
    cout << "win" << "\n";
  else
    cout << "lose" << "\n";

  return 0;
}