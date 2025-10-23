#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;

  // 입력 받은 숫자 만큼 별 찍기
  for (int i = 0; i < n; i++)
    cout << '*';
  cout << "\n";

  return 0;
}