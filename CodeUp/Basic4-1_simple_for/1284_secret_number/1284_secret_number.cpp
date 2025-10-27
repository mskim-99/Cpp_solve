#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;
  bool is_prime = true;
  bool is_prime2 = true;
  int prime_n1 = 0, prime_n2 = 0;

  if (n <= 3)
  {
    cout << "wrong number" << "\n";
    return 0;
  }
  
  for (int i = 2; i < n; i++)
  {
    // 첫 번째 소수를 찾는 부분
    is_prime = true;
    for (int j = 2; j < i; j++)
    {
      if (i % j == 0)
      {
        is_prime = false;
        break;
      }
    }

    // 만약 소수를 찾았다면
    if(is_prime)
    {
      prime_n1 = i;
      if (n % prime_n1 == 0)
      {
        is_prime2 = true;
        prime_n2 = n / i;
        // 두번째 소수를 찾는 부분
        for (int j = 2; j < prime_n2; j++)
        {
          if(prime_n2 % j == 0)
          {
            is_prime2 = false;
            break;
          }
        }
        if(is_prime2)
          break;
      }
    }
  }

  // 두 소수의 곱이 n과 동일하면 출력
  if(prime_n1 * prime_n2 == n)
  {
    if(prime_n1 < prime_n2)
      cout << prime_n1 << " " << prime_n2 << "\n";
    else
      cout << prime_n2 << " " << prime_n1 << "\n";
  }
  else
    cout << "wrong number" << "\n";

  return 0;
}