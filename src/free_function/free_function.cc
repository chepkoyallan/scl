#include "free_function.h"
#include <iostream>

using std::cout;
using std::cin;

bool IsPrime(int x)
{
    bool prime = true;
    for (int i = 2; i <= x; i = i + 1)
    {
        int factor = x / i;
        if (factor * i == x)
        {
            prime = false;
            break;
        }
    }
    return prime;
};

bool Is2MorePrime(int x)
{
    x = x + 2;
    return IsPrime(x);
}


void free_function_demo()
{

         int value;
         cout << "Enter a number" << '\n';
         cin >> value;

         if (IsPrime(value))
         {
             cout << value << "Is prime" << '\n';
         }
         else
         {
             cout << value << "Is not prime" << '\n';
         }
         cout << value << "+ 2 is ";
         if (!Is2MorePrime(value))
         {
             cout << "not ";
         }
         cout << "prime" << '\n';
         cout << value << '\n';

}