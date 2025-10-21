#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;

  // 0까지 출력하기 위해 0보다 작아지면 반복 종료
  // 입력한 값보다 1작은 값부터 0까지 출력
  while (n > 0)
  {
    n--;
    cout << n << "\n";
    
  }
  

  return 0;
}