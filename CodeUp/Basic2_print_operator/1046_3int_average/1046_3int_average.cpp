#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    long long a, b, c;
    cin >> a >> b >> c;
    cout << a + b + c << "\n";
    cout << fixed << setprecision(1) << float(a + b + c) / 3.0 << "\n";

    return 0;
}