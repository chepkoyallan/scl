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
    // https://en.cppreference.com/w/cpp/language/operators
    Person operator+(int i) const;
    friend Person operator+(int i, Person const& p);
    //spaceship operator
    auto operator<=>(Person const& p) const {return  age <=> p.age;}

    // compares all the member variables of the obj in the order it was declared
    // auto operator<=>(Person const& p) const = default;
    ~Person();
};

// integer before the operator
Person operator+(int i, Person const& p);

void const_member_function();
void classes_and_inheritance();
void operator_overloading();