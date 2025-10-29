#include <iostream>
#include <string>
using namespace std;

int main()
{
  int n;
  cin >> n;
  string star = "*";
  
  // 역삼각형으로 n부터 1까지 줄여가면서 출력
  for (int i = n; i > 0; i--)
  {
    for (int j = i; j > 0; j--)
    {
      cout << star;
    }
    cout << "\n";
  }

  return 0;
}