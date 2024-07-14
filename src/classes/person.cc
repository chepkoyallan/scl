#include "person.h"
using std::cout;
using std::string;

Person::Person(string first_name, string second_name, int age)
    : first_name(first_name), second_name(second_name), age(age)
{
    cout << "constructing" << first_name << " " << second_name << '\n';
}

string Person::getName()
{
    return first_name + " " + second_name;
}

Person::~Person()
{
    cout << "destructing: " << first_name << " " << second_name << '\n';
}
