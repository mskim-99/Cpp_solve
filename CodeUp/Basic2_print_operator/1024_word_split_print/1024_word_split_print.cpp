#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    string value;
    cin >> value;

    vector<char> word(value.begin(), value.end());
    
    for (char c : word){
        cout << "\'" << c << "\'" << "\n";  
    }
    cout << "\n";

    return 0;
}