#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
  // 평문에서 3만큼 이동한 시저 암호
  string str;
  getline(cin, str);
  string new_str = "";
  
  for (int i = 0; i < str.size(); i++)
  {
    char c = str[i];
    // 만약 알파벳 이라면
    if (isalpha(c))
    { 
      // 대문자 일때 처리
      if (isupper(c))
        new_str += char('A' + (c - 'A' + 3) % 26);
      // 소문자 일때 처리
      else
        new_str += char('a' + (c - 'a' + 3) % 26);
    }
    // 알파벳이 아니라면 (공백, 쉼표 등) 그대로
    else
      new_str += c;
  }
  cout << new_str << "\n";

  return 0;
}