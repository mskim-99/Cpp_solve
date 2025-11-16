#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
  int arr[26] = {0,};
  string s;
  // 공백 포함해서 입력 받음
  getline(cin, s);

  // 입력 받은 문자열에서 문자 하나씩 뽑아오기
  for (char c : s)
  { 
    // 만약 알파벳이라면 소문자로 바꾸고 해당 인덱스 +1
    if (isalpha(c))
    {
      c = tolower(c);
      arr[c - 'a'] ++;
    }
  }

  // 알파벳 a부터 z까지 배열을 반복하며 출력
  for (int i = 0; i < 26; i++)
  {
    cout << char('a' + i) << ":" << arr[i] << "\n";
  }

  return 0;
}