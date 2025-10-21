#include <iostream>
using namespace std;

int main()
{
  char n;
  
  // q가 입력될 때 까지 문자를 계속 출력
  while(n != 'q')
  {
    cin >> n;
    cout << n << "\n";
  }

  return 0;
}