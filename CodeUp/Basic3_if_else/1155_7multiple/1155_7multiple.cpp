#include <iostream>
using namespace std;

int main()
{
  int a;
  cin >> a;

  // 7의 배수이면 multiple 출력
  if (a % 7 == 0)
    cout << "multiple" << "\n";
  else
   cout << "not multiple" << "\n";

  return 0;
}