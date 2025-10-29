#include <iostream>
#include <string>
using namespace std;

int main()
{
  string str;
  cin >> str;
  // 입력 받은 16진수 str을 정수형으로 변경
  int value = stoi(str, nullptr, 16);
  
  for (int i = 1; i < 16; i++)
  {
    cout << str << "*" << uppercase << hex << i << "="
        << uppercase << hex << (value * i) << "\n";
  }

  return 0;
}