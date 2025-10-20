#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
  string math;
  cin >> math;
  int pos;  // 연산자 위치
  char op;  // 연산자

  // string::npos -> 반환 값이 없다.
  if (math.find('+') != string::npos)
  {
    pos = math.find('+');
    op = '+';
  }
  else if (math.find('-') != string::npos)
  {
    pos = math.find('-');
    op = '-';
  }
  else if (math.find('*') != string::npos)
  {
    pos = math.find('*');
    op = '*';
  }
  else if (math.find('/') != string::npos)
  {
    pos = math.find('/');
    op = '/';
  }

  // 연산자 기준으로 분리
  string left = math.substr(0, pos);
  string right = math.substr(pos + 1);

  // stoi 함수는 문자열을 숫자형으로 (string to integer)
  int a = stoi(left);
  int b = stoi(right);

  // 연산자 종류에 따라 출력
  switch (op)
  {
  case '+':
    cout << (a + b) << "\n";
    break;
  case '-':
    cout << (a - b) << "\n";
    break;
  case '*':
    cout << (a * b) << "\n";
    break;
  case '/':
    cout << fixed << setprecision(2) << ((double)a / b) << "\n";
    break;
  
  default:
    break;
  }

  return 0;
}