#include "person.h"
using std::string;


class Tweeter : public Person
{
private:
    string handle;

public:
    Tweeter(string first_name, string second_name, int age, string handle);
    ~Tweeter();
};
