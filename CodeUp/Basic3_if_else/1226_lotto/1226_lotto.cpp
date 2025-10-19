#include <iostream>
using namespace std;

int main()
{
  int lotto_1, lotto_2, lotto_3, lotto_4, lotto_5, lotto_6;
  int bonus;
  int value_1, value_2, value_3, value_4, value_5, value_6;
  int result = 0;

  cin >> lotto_1 >> lotto_2 >> lotto_3 >> lotto_4 >> lotto_5 >> lotto_6 >> bonus;
  cin >> value_1 >> value_2 >> value_3 >> value_4 >> value_5>> value_6;

  // 각 번호가 일치하는지 if문으로만 구현
  if ((lotto_1 == value_1) || (lotto_1 == value_2) || (lotto_1 == value_3) || (lotto_1 == value_4) || (lotto_1 == value_5) || (lotto_1 == value_6))
    result += 1;
  if ((lotto_2 == value_1) || (lotto_2 == value_2) || (lotto_2 == value_3) || (lotto_2 == value_4) || (lotto_2 == value_5) || (lotto_2 == value_6))
    result += 1;
  if ((lotto_3 == value_1) || (lotto_3 == value_2) || (lotto_3 == value_3) || (lotto_3 == value_4) || (lotto_3 == value_5) || (lotto_3 == value_6))
    result += 1;
  if ((lotto_4 == value_1) || (lotto_4 == value_2) || (lotto_4 == value_3) || (lotto_4 == value_4) || (lotto_4 == value_5) || (lotto_4 == value_6))
    result += 1;
  if ((lotto_5 == value_1) || (lotto_5 == value_2) || (lotto_5 == value_3) || (lotto_5 == value_4) || (lotto_5 == value_5) || (lotto_5 == value_6))
    result += 1;
  if ((lotto_6 == value_1) || (lotto_6 == value_2) || (lotto_6 == value_3) || (lotto_6 == value_4) || (lotto_6 == value_5) || (lotto_6 == value_6))
    result += 1;

  // 5개가 맞았을 경우 보너스를 맞추면 2등
  if (result == 5)
  {
    if ((bonus == value_1) || (bonus == value_2) || (bonus == value_3) || (bonus == value_4) || (bonus == value_5) || (bonus == value_6))
      result += 2;
  }

  // 각 케이스에 따라 등수 출력
  switch (result)
  {
  case 3:
    cout << "5" << "\n";
    break;

  case 4:
    cout << "4" << "\n";
    break;

  case 5:
    cout << "3" << "\n";
    break;

  case 6:
    cout << "1" << "\n";
    break;

  case 7:
    cout << "2" << "\n";
    break;
  
  default:
    cout << "0" << "\n";
    break;
  }

  return 0;
}