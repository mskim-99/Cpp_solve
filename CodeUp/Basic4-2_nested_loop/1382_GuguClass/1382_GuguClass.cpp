#include <iostream>
#include <iomanip>
using namespace std;

int main()
{ 
  // 전체 1부터 9까지 곱할 값
  for (int i = 1; i <= 9; i++)
  { 
    // 2단 출력 부분
    for (int j = 2; j <= 2; j++)
    {
      cout << j << " " << "x" << " " << i << " " << "=" << " " << right << setw(2) << (j * i);
      cout << "\t";
    }
    
    // 3단 출력 부분
    for (int j = 3; j <= 3; j++)
    {
      cout << j << " " << "x" << " " << i << " " << "=" << " " << right << setw(2) << (j * i);
      cout << "\t";
    }
    
    // 4단 출력 부분
    for (int j = 4; j <= 4; j++)
    {
      cout << j << " " << "x" << " " << i << " " << "=" << " " << right << setw(2) << (j * i);
      cout << "\t";
    }
    
    // 5단 출력 부분
    for (int j = 5; j <= 5; j++)
    {
      cout << j << " " << "x" << " " << i << " " << "=" << " " << right << setw(2) << (j * i);
      cout << "\t";
    }
    // 5단 끝나면 줄바꿈
    cout << "\n";
  }

  return 0;
}