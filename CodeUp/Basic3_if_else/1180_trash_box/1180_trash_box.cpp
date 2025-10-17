#include <iostream>
#include <string>
using namespace std;

int main()
{
  int alzip;
  cin >> alzip;
  int digit = alzip % 10;
  alzip /= 10;

  // 10의 자리 수와 1의 자리 수 스왑
  string result = to_string(digit) + to_string(alzip);
  int value = stoi(result) * 2;
  if (value >= 100)
    value = value % 100;

  // 50 보다 작거나 같다면 크기와 GOOD 출력
  if (value <= 50)
  {
    cout << value << "\n";
    cout << "GOOD" << "\n";
  }
  else
  {
    cout << value << "\n";
    cout << "OH MY GOD" << "\n";
  }

  return 0;
}