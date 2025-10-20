#include <iostream>
using namespace std;

int main()
{
  double height, weight;
  cin >> height >> weight;
  double normal_kg = 0;

  // 키가 150 미만일 때, 150~160 일 때, 160이상 일 때 각각 표준 몸무게 계산
  if (height < 150)
    normal_kg = height - 100.0;
  else if ((150 <= height) && (height < 160))
    normal_kg = (height - 150) / 2.0 + 50;
  else
    normal_kg = (height - 100) * 0.9;

  // 비만도 계산
  double bmi = (weight - normal_kg) * 100.0 / normal_kg;

  // 비만도에 따라 결과 출력
  if (bmi <= 10)
    cout << "정상" << "\n";
  else if ((10 < bmi) && (bmi <= 20))
    cout << "과체중" << "\n";
  else 
    cout << "비만" << "\n";

  return 0;
}