#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int year, month, day;
    char dat;
    
    cin >> year >> dat >> month >> dat >> day;
    cout << setfill('0') << setw(2) << day << "-"
         << setfill('0') << setw(2) << month << "-"
         << setfill('0') << setw(2) << year  << "\n";

    return 0;
}