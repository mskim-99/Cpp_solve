#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int first_number, second_number;
    char trash;

    cin >> first_number >> trash >> second_number;
    cout << setfill('0') << setw(6) << first_number
         << setfill('0') << setw(7) << second_number << "\n";

    return 0;
}