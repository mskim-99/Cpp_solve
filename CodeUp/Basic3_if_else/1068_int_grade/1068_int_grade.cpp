#include <iostream>
using namespace std;

int main()
{
  int a;
  cin >> a;

  if (a <= 39){cout << "D" << "\n";}
  else if (a <= 69){cout << "C" << "\n";}
  else if (a <= 89){cout << "B" << "\n";}
  else{cout << "A" << "\n";}

  return 0;
}