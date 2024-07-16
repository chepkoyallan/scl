#include "person.h"
#include "inheritance.h"
#include <format>

using std::cout;
using std::string;
using std::format;



Person::Person(string first_name, string second_name, int age)
    : first_name(first_name), second_name(second_name), age(age)
{
    cout << "constructing" << first_name << " " << second_name << '\n';
}

string Person::getName() const
{
    return first_name + " " + second_name;
}

Person::~Person()
{
    cout << "destructing: " << first_name << " " << second_name << '\n';
}

// const member function

string summary(string id, Person const& p)
{
    return format("{}, {} {}", id, p.getName(), p.GetAge());
};


void const_member_function()
{
    {
        Person p1{"allan", "ryan", 23};

        string p1Summary = summary("p1", p1);

        p1.SetNumber(34);

        summary("p1", p1);
    }

}

void classes_and_inheritance()
{
    {
        Person p2{"kip", "oba", 24};
        {
            Tweeter t1("allan2", "c", 34, "@allan");
            string name2 = t1.getName();
        }
        string name2 = p2.getName();
        cout << "p2:" << name2 << '\n';
    }
}

void operator_overloading()
{
    Person p1{"kate", "gregory", 34};
    string p1summary = format("p1: {}, {}", p1.getName(), p1.GetAge());
    cout << p1summary << '\n';

    Person p2 = p1 + 7;
    string p2summary = format("p2: {}, {}", p2.getName(), p2.GetAge());
    cout << p2summary << '\n';

    p1 = 4 + p2;

    p1summary = format("p1: {}, {}", p1.getName(), p1.GetAge());
    cout << p1summary << '\n';

    // comparing 2 person objects
    Person someone("someone", "else", 43);
    string compare = "p1 is";

    if (!(p1 < someone))
    {
        compare += "not";
    }
    compare += " less than someone";
    cout << compare << '\n';
}


Person Person::operator+(int i) const
{
    return Person(first_name, second_name, age+i);
}

Person operator+(int i, Person const& p)

{
//    return Person{p.first_name, p.second_name, i + p.age};
    return p + i;
}
