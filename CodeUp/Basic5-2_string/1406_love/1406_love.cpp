#include <iostream>
#include <string>
using namespace std;

int main()
{
  string s;
  cin >> s;

  // 만약에 입력된 문자열이 love라면 아래 문장 출력
  if (s == "love")
    cout << "I" << " " << s << " " << "you." << "\n";

  return 0;
}