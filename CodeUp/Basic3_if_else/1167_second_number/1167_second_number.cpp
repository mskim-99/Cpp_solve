#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
  int a, b, c;
  cin >> a >> b >> c;
  
  int arr[3] = {a, b, c};
  // 배열 정렬
  sort(arr, arr + 3);

  cout << arr[1] << "\n";

  return 0;
}