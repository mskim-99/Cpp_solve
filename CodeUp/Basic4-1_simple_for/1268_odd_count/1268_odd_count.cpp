#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;
  int count = 0;
  int value;

  // n만큼 반복해서 숫자를 입력받고
  // 그 숫자가 홀수라면 카운팅
  for (int i = 0; i < n; i++)
  {
    cin >> value;
    if (value % 2 != 0)
      count++;
  }
  cout << count << "\n";

  return 0;
}