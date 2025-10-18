#include <iostream>
using namespace std;

int main()
{
  int number;
  cin >> number;

  // 11이상 20이하라면 무조건 th를 붙여서 출력
  // 나머지가 1이라면 st, 2라면 nd, 3이라면 rd 붙여서 출력
  if ((number >= 11) && (number <= 20))
    cout << number << "th" << "\n";
  else if (number % 10 == 1)
    cout << number << "st" << "\n";
  else if (number % 10 == 2)
    cout << number << "nd" << "\n";
  else if (number % 10 == 3)
    cout << number << "rd" << "\n";
  else
    cout << number << "th" << "\n";

  return 0;
}