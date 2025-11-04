#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
  string s;
  getline(cin, s);  // 공백까지 전체 입력

  vector<char> v;   // 문자 벡터 생성

  for (char c : s)  // 입력받은 문자열 반복
  {
    if (c != ' ')   // 공백이 아니라면 벡터에 삽입
      v.push_back(c);
  }
  
  for (char c : v)  // 벡터를 반복하며 문자 출력
    cout << c;
  cout << "\n";     // 줄바꿈

  return 0;
}