#include <iostream>
#include <vector>
using namespace std;

int main()
{
    char a = '[';
    char b = ']';
    int value;
    int digit = 10000;
    
    cin >> value;

    vector<int> number;

    while(digit > 0){
        int n = (value / digit) * digit;
        number.push_back(n);
        value %= digit;
        digit /= 10;
    }

    for (int i : number){
        cout << a << i << b << "\n";
    }

    return 0;
}