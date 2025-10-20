#include <iostream>
using namespace std;

int main()
{
  // float 사용시 부동소수점 오차로 정확한 계산이 어려울 수 있다.
  double height, weight;
  cin >> height >> weight;

  double normal_kg = (height - 100) * 0.9; // 표준 몸무게 계산
  double bmi = (weight - normal_kg) * 100 / normal_kg; // bmi계산

  // 비만도에 따른 결과 출력
  if (bmi <= 10)
    cout << "정상" << "\n";
  else if ((bmi > 10) && (bmi <= 20))
    cout << "과체중" << "\n";
  else
    cout << "비만" << "\n";

  return 0;
}