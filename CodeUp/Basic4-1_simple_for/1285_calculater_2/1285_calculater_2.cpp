#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
  string n;
  cin >> n;
  int result = 0;
  int num = 0;
  bool is_op = true;
  char op = 0;

  for (int i = 0; i < n.size(); i++)
  {
    char c = n[i];
    if(isdigit(c))
    {
      num = num * 10 + (c - '0');
    }
    else
    {
      if(is_op)
      {
        result = num;
        is_op = false;
        num = 0;
      }


      if (op == '+')
        result += num;
      else if (op == '-')
        result -= num;
      else if (op == '*')
        result *= num;
      else if (op == '/')
        result /= num;
      
      if (c == '=') break;
      op = c;
      num = 0;  // 초기화
    }
  }
  cout << result << "\n";

  return 0;
}