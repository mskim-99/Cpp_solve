#include <iostream>
using namespace std;

int main()
{
  int a, b;
  cin >> a >> b;

  // 1번 부터 치즈버거, 야채버거, 우유, 계란말이, 샐러드
  int arr[6] = {0, 400, 340, 170, 100, 70};
  int value = arr[a] + arr[b];

  // 2가지 고른 칼로리가 500이상이 넘으면 어머니가 화냄
  if (value > 500)
    cout << "angry" << "\n";
  else
    cout << "no angry" << "\n";


  return 0;
}