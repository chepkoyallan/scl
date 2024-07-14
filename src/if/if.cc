#pragma once
#include <iostream>
using std::cin;
using std::cout;

int if_demo()
{
    int x, y;
    cout << "Enter two numbers" << '\n';
    cin >> x >> y;

    cout << x << " ";

    if (x > y)
    {
        cout << "is larger than " << '\n';
    }
    else
    {
        cout << "is not larger than " << '\n';
    }

    if (x + y > 10)
        cout << "Thanks for chosing larger numbers" << "\n";

    return 1;
};
