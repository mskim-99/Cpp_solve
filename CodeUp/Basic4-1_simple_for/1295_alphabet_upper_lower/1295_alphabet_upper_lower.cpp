#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
  string str;
  cin >> str;
  string new_str = "";

  // str의 사이즈만큼 반복
  for (int i = 0; i < str.size(); i++)
  {
    // 대문자라면 소문자로
    if (isupper(str[i]))
    {
      char c = tolower(str[i]);
      new_str += c;
    }
    // 소문자라면 대문자로
    else
    {
      char d = toupper(str[i]);
      new_str += d;
    }
  }

  cout << new_str << "\n";
    
  return 0;
}