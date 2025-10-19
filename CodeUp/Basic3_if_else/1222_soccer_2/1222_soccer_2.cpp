#include <iostream>
using namespace std;

int main()
{
  int time, a, b;
  cin >> time >> a >> b;

  // 경기가 종료될 때 까지 반복
  while (time < 90)
  {
    a += 1;
    time += 5;
  }

  if (a > b)
    cout << "win" << "\n";
  else if (a < b)
    cout << "lose" << "\n";
  else
    cout << "same" << "\n";

  return 0;
}