#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double value;

    cin >> value;
    std::cout << std::fixed << std::setprecision(6) << value << std::endl;
    // cout << value << "\n";

    return 0;
}