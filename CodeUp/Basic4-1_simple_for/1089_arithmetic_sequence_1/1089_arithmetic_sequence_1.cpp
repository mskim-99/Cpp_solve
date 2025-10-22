#include <iostream>
using namespace std;

int main()
{
  int start, gap, end;
  cin >> start >> gap >> end;
  int value = start;

  // start부터 end까지 gap만큼의 등차수열 값 저장
  for (int i = 1; i < end; i++)
  {
    value += gap;
  }
  cout << value << "\n";

  return 0;
}