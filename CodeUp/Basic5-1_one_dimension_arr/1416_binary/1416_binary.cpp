#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int n;
  cin >> n;
  vector<int> v;

  if (n == 0)
    cout << 0;

  // 입력된 n이 0이 아니라면 반복
  while (n != 0)
  {
    if (n % 2 == 1)
    {
      v.push_back(1);
      n /= 2;
    }
    else if (n % 2 == 0)
    {
      v.push_back(0);
      n /= 2;
    }
  }
  // 벡터를 거꾸로 순회
  for (auto it = v.rbegin(); it != v.rend(); ++it)
    cout << *it;
  cout << "\n";
  

  return 0;
}