#include <iostream>
using namespace std;

int main()
{
  int ball;
  cin >> ball;

  if (30 <= ball && ball <= 40)
    cout << "win" << "\n";
  else if (60 <= ball && ball <= 70)
    cout << "win" << "\n";
  else
    cout << "lose" << "\n";

  return 0;
}