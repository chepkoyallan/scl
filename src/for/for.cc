#pragma once
#include "for.h"
#include <iostream>
#include <vector>


using std::cin;
using std::cout;
using std::vector;

void for_demo()
{
    vector nums = {-2, -3, -6, 0, 5, 8, 9, 10, 12};
    {
        int i = 0;
        cout << i << "\n";
        while (i < 10)
        {
            cout << i << ' ';
            i += 1;
        }
        cout << '\n';
    }
    {
        for (int counter = 0; counter < 10; counter++)
        {
            cout << counter << ' ';
        }
    }
    {
        // vector nums = {5, 8, 9, 10, 12};

        for (int index = 0; index < nums.size(); index++)
        {
            if (nums[index] < 0)
            {
                break;
            }
            cout << nums[index] << ' ';
        }
        cout << '\n';
    }
    {
        for (auto elements : nums)
        {
            if (elements < 0)
            {
                continue;
            }

            cout << elements << ' ' << '\n';
        }
    }
}
