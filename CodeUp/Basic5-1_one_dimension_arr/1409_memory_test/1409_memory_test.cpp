#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int number;
  vector<int> v;
  int n;
  
  // 10번 반복하며 벡터에 숫자 저장
  for (int i = 0; i < 10; i++)
  {
    cin >> number;
    v.push_back(number);
  }

  // 입력 받은 n번째 숫자 출력
  cin >> n;
  cout << v[n-1] << "\n";

  return 0;
}