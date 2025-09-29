#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int a, b;

    cin >> a >> b;
    cout << a + b << "\n";
    cout << a - b << "\n";
    cout << a * b << "\n";
    cout << a / b << "\n";
    cout << a % b << "\n";
    cout << fixed << setprecision(2) << float(a) / float(b) << "\n";

    return 0;
}