#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int n;
  cin >> n;
  vector<int> v;

  // n만큼 반복하며 벡터에 num 저장
  for (int i = 0; i < n; i++)
  {
    int num;
    cin >> num;
    v.push_back(num);
  }

  // n*n 반복하며 벡터의 각 값끼리 비교
  // 만약 자기 자신이라면 다음 반복 진행
  for (int i = 0; i < n; i++)
  {
    cout << i+1 << ":" << " ";
    for (int j = 0; j < n; j++)
    {
      if (i == j)
        continue;
      else if (v[i] > v[j])
        cout << ">" << " ";
      else if (v[i] < v[j])
        cout << "<" << " ";
      else if (v[i] == v[j])
        cout << "=" << " ";
    }
    cout << "\n";
  }

  return 0;
}