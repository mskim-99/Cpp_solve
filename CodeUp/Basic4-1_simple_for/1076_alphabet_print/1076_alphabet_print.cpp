#include <iostream>
using namespace std;

int main()
{
  char alphabet;
  cin >> alphabet;
  int n = (int)alphabet;
  int start = 97;

  // ASCII코드 값으로 문자 출력
  while (start <= n)
  {
    cout << (char)start << "\n";
    start++;
  }
  

  return 0;
}