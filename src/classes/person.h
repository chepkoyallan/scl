#pragma once
#include <iostream>
using std::string;

class Person
{
private:
    string first_name;
    string second_name;
    int age;

public:
    Person(string first_name, string second_name, int age);
    string getName() const;
    int GetAge() const
    {
        return age;
    };
    void SetNumber(int age)
    {
        age = age;
    };
    ~Person();
};


void const_member_function();
void classes_and_inheritance();