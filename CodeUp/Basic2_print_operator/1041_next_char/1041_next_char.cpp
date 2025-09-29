#include <iostream>
using namespace std;

int main()
{
    char value;

    cin >> value;
    int ascii = int(value) + 1;
    cout << char(ascii) << "\n";

    return 0;
}