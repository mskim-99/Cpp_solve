#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;
  // 기본적으로 소수라고 가정
  bool is_prime = true;

  if (n < 2)  // 1은 소수가 아님
    is_prime = false;
  else
  {
    for (int i = 2; i < n; i++)
    {
      if(n % i == 0)
      {
        // 만약 1과 자기 자신이 아닌 숫자로 나누어 떨어지면
        // 소수가 아님 처리 및 반복문 종료
        is_prime = false;
        break;
      }
    }
  }
  if (is_prime)
    cout << "prime" << "\n";
  else
    cout << "not prime" << "\n";


  return 0;
}