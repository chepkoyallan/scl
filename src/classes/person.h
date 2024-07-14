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
    string getName();
    ~Person();
};
