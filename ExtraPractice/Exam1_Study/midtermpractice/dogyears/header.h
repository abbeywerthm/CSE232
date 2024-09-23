#pragma once
#include <string>

class Dog {
private:
    int const true_age_;
public:
    std::string const name;
    Dog(std::string const & name, int true_age) :
        name(name), 
        true_age_(true_age) {}
    int RelativeAge();
};

/* Age is const in private so its needing a getter to grab that variable.
The name is const in public bc its easier for interface to grab it and not
necessarily a calculation would give the dog a different name...

Easier to leave name as a public const if its a matter of just displaying it
within the output message */