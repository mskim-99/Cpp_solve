#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int year, month, day;
    char dat;

    cin >> year >> dat >> month >> dat >> day;
    cout << setfill('0') << setw(4) << year << dat
         << setfill('0') << setw(2) << month << dat
         << setfill('0') << setw(2) << day << "\n";

    return 0;
}