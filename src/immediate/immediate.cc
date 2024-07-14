#include <iostream>

using std::cin;
using std::cout;
using std::string;


void immediate_demo()
{
    int x = 1;
    while (x != 0)
    {
        cout << "Enter a number 0 to quit" << '\n';
        cin >> x;
        string sign = x > 0 ? "positive" : "0 or negative";
        cout << "Your number is " << sign << '\n';
    }
}
