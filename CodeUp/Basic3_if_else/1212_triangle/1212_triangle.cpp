#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
  // 3개의 직선 중 c가 가장 긴 변일 때, c < a+b 이면 삼각형 조건 성립
  // c의 길이가 가장 길지 않으면 조건 성립 X
  int a, b, c;
  cin >> a >> b >> c;

  int arr[3] = {a, b, c};
  sort(arr, arr + 3);

  if (arr[2] < (arr[0] + arr[1]))
    cout << "yes" << "\n";
  else
    cout << "no" << "\n";

  return 0;
}