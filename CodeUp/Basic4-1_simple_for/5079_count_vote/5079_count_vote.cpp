#include <iostream>
#include <string>
using namespace std;

int main()
{
  int n;          // 투표 수
  cin >> n;
  string str;     // A or B
  cin >> str;
  int count_a = 0;// A투표 개수를 셀 변수
  int count_b = 0;// B투표 개수를 셀 변수

  for (int i = 0; i < n; i++)
  {
    // A라면 count_a + 1
    if (str[i] == 'A')
      count_a ++;
    else 
      count_b ++;
  }
  // A와 B 둘 중 더 많은 득표수의 값 출력
  if (count_a > count_b)
    cout << "A" << "\n";
  else if (count_a < count_b)
    cout << "B" << "\n";
  else
    cout << "Tie" << "\n";

  return 0;
}