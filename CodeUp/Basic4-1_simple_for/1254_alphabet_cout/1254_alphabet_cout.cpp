#include <iostream>
using namespace std;

int main()
{
  // a와 b는 사전순으로 입력
  char a, b;
  cin >> a >> b;
  // 문자를 ASCII 코드 값으로 형변환
  int x = (int)a;
  int y = (int)b;

  // ASCII x값부터 y값까지 순서대로 알파벳 출력
  for (int i = x; i <= y; i++)
    cout << (char)i << " ";
  cout << "\n";

  return 0;
}