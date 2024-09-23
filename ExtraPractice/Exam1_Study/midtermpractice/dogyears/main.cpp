#include <iostream>
#include "header.h"

int main(){
    std::string DogName;
    int DogAge;

    std::cout<<"Whats the dog's name: ";
    std::getline(std::cin, DogName);

    std::cout<< "How old is it: ";
    std::cin>>DogAge;

    Dog myDog(DogName,DogAge);

    int relativeAge = myDog.RelativeAge();

    std::cout<< myDog.name<< " is "<<relativeAge<<" human years old."<<std::endl;
}
/* Compiling the function:
g++ -std=c++20 -o myprogram main.cpp header.cpp
then ./myprogram NOT ./a.out if you establish a new program combining
all the header.
*/