#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  int n, k;
  cin >> n >> k;
  // pow는 double형만 반환하기 때문에 정수형으로 사용하려면 형변환
  int value = (int)pow(n, k);

  cout << value << "\n";

  return 0;
}