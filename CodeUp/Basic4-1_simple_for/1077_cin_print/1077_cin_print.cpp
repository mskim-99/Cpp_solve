#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;
  int i = 0;  // index  번호

  // 인덱스를 1증가시키면서 n까지 출력
  while (i <= n)
  {
    cout << i << "\n";
    i++;
  }

  return 0;
}