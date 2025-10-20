#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;
  int value;
  int i = 0;

  // n까지 반복하면서 정수 출력
  while (i < n)
  {
    cin >> value;
    cout << value << "\n";
    i++;
  }

  return 0;
}