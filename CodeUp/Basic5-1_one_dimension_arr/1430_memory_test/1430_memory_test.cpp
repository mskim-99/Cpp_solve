// #include <iostream>
// #include <vector>
// using namespace std;

// // 2중 반복문이라 제한 시간 4초 초과
// int main()
// {
//   int n, m;
//   cin >> n;
//   // 비교를 위한 벡터 2개 생성
//   vector<int> v1;
//   vector<int> v2;

//   // 첫 번째 벡터
//   for (int i = 0; i < n; i++)
//   {
//     int num;
//     cin >> num;
//     v1.push_back(num);
//   }
  
//   // 두번째 벡터
//   cin >> m;
//   for (int i = 0; i < m; i++)
//   {
//     int num;
//     cin >> num;
//     v2.push_back(num);
//   }

//   // 두 번째 벡터의 값이 첫 번째 벡터에 존재하는지 확인
//   // 만약 존재한다면 1을 출력하기 위해 value 값 조정
//   for (int vm : v2)
//   {
//     int value = 0;  // value 초기화
//     for (int vn : v1)
//     {
//       if (vm == vn)
//         value = 1;
//     }
//     cout << value << " ";
//   }
//   cout << "\n";


//   return 0;
// }

#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{
  int n, m;
  cin >> n;
  // 해시테이블 생성 (탐색 속도 O(1))
  unordered_set<int> v;

  // n 번 반복하면서 set에 저장
  for (int i = 0; i < n; i++)
  {
    int num;
    cin >> num;
    v.insert(num);
  }

  // m번 반복하며 set에 숫자가 있는지 확인
  // 해당 값이 있다면 1을 공백을 띄워서 출력
  // 해당 값이 없다면 0을 공백을 띄워서 출력
  cin >> m;
  for (int i = 0; i < m; i++)
  {
    int num;
    cin >> num;
    if(v.find(num) != v.end())
      cout << 1 << " ";
    else
      cout << 0 << " ";
  }
  cout << "\n";

  return 0;
}