#pragma once
#include "while.h"
#include <iostream>

using std::cin;
using std::cout;

void while_demo()
{
    int x = 0;
    bool valid = false;
    while (!valid)
    {
        cout << "Enter a value between 3 and 100 " << "\n";
        cin >> x;
        if (x >= 3)
        {
            if (x < 100)
            {
                valid = true;
            }
        }
    }
    bool prime = true;
    int i = 2;
    while (i <= x / i)
    {
        int factor = x / i;
        if (factor * i == x)
        {
            cout << "factor found: " << factor << "\n";
            prime = false;
        }
        i = i + 1;
    }
}
