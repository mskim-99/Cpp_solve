#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
  int n;
  cin >> n;
  // 벡터에 파이썬 튜플 형태로 저장
  vector<pair<string, int>> v;

  // n번 만큼 반복하며 벡터에 저장
  for (int i = 0; i < n; i++)
  {
    string name;
    int score;
    cin >> name >> score;
    v.push_back({name, score});
  }

  // 벡터를 int 값으로 오름차순 정렬
  sort(v.begin(), v.end(), [](auto &a, auto &b)
  {
    return a.second > b.second;
  });

  // 3번째로 큰 값 출력
  cout << v[2].first << "\n";

  return 0;
}