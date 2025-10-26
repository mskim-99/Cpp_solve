#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  int stock, day;
  cin >> stock; // 투자 금액
  cin >> day;   // 투자 일자
  double value = stock;
  int percent = 0;
  
  // 투자 일자 만큼 반복
  // 수익이라면 퍼센트 만큼 곱하고, 손실이라면 손실 금액 만큼 차감
  for (int i = 0; i < day; i++)
  { 
    cin >> percent;
    if (percent > 0)
      value *= (1 + (0.01 * percent));
    else if (percent < 0)
      value -= (value * (0.01 * abs(percent)));
  }
  // 최종 금액에서 투자 금액을 저장
  double result = value - stock;

  // round 함수를 사용해서 소수 첫째 자리에서 반올림
  if (result > 0)
    cout << round(result) << "\n" << "good" << "\n";
  else if (result < 0)
    cout << round(result) << "\n" << "bad" << "\n";
  else
    cout << round(result) << "\n" << "same" << "\n";

  return 0;
}