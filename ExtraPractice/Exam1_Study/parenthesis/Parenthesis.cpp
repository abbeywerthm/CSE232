/*
Directions: 

Write a function named InBrackets that takes a const reference to a string and 
returns the part of the string that starts after open parenthesis ('(') and ends
before close parenthesis (')'). You can assume that every argument has at most
one of each open and close parenthesis. If no such string exists, return the emtpy 
string.*/

/*
Example:

std::string const str{"My dog's (name) is Mal."};
std::string const result = InBrackets(str);
//result should be "name"
More examples:
" no parentheses" --> ""
"(232)"--> "232"
"Only one of the (two parentheses" --> ""
"Whitespace ( can be in the ) returned string" --> " can be in the "
*/

#include <string>
#include <iostream>

std::string InBrackets(const std::string& str){
    std::size_t openPar = str.find('(');
    std::size_t closePar = str.find(')');

    if (openPar != std::string::npos && closePar != std::string::npos && closePar >openPar){
        return str.substr(openPar +1, closePar - openPar - 1);
    }
    return "";
}

int main(){
    std::string usertypes;

    std::cout <<"Enter parentheses in string wherever: ";
    std::getline(std::cin,usertypes);

    std::string result = InBrackets(usertypes);
}



