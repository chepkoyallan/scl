#include "inheritance.h"
using std::cout;

Tweeter::Tweeter(string first_name, string second_name, int age, string handle)
    : Person(first_name, second_name, age), handle(handle)
{
    cout << "constructing tweeter" << handle << '\n';
}

Tweeter::~Tweeter(void)
{
    cout << "destructing tweeter" << handle << '\n';
}
