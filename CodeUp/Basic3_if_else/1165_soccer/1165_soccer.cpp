#include <iostream>
using namespace std;

int main()
{
  int time, goal;
  cin >> time >> goal;
  
  while(time < 90)
  {
    goal += 1;
    time += 5;
  }
  cout << goal << "\n";

  return 0;
}