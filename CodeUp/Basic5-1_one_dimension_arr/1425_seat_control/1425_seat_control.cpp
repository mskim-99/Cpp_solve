#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
  int n, c;
  cin >> n >> c;
  // 정수형을 저장할 벡터 선언
  vector<int> v;

  // n만큼 반복하며 벡터에 숫자 저장
  for (int i = 0; i < n; i++)
  {
    int height;
    cin >> height;
    v.push_back(height);
  }

  // 벡터를 오름차순으로 정렬
  sort(v.begin(), v.end());

  // n번 반복하며 벡터의 값을 공백을 띄워서 출력
  // 만약 c (한 줄 최대 좌석 수) 라면 줄바꿈 출력
  for (int i = 0; i < n; i++)
  { 
    cout << v[i] << " ";

    if ((i + 1)% c == 0)
      cout << "\n";
  }
  cout << "\n";

  return 0;
}