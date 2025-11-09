#include <iostream>
#include <string>
using namespace std;

int main()
{
  string s;
  cin >> s;
  int count_1 = 0, count_2 = 0;

  // 문자열의 길이만큼 반복
  for (int i = 0; i < s.size(); i++)
  { 
    // ( 이라면 count_1 1증가
    if (s[i] == '(')
      count_1 += 1;
    // ) 이라면 count_2 1증가
    else if (s[i] == ')')
      count_2 += 1;
  }
  
  cout << count_1 << " " << count_2 << "\n";

  return 0;
}