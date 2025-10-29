#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
  string str;
  getline(cin, str);
  string new_str = "";

  // stra의 크기 만큼 반복
  for (int i = 0; i < str.size(); i++)
  {
    char c = str[i];
    // 알파벳 이라면 3만큼 이동한 값 저장
    if (isalpha(c))
    {
      new_str += 'a' + ((c - '0') % 26);
    }
    // 공백이라면 그대로 저장
    else
      new_str += c;
  }

  cout << new_str << "\n";

  return 0;
}