#include <string>
#include <iostream>

std::string::size_type FindNum(std::string const &text, std::string const &number){
    std::string lowercase;
    for(char const &letter : text){
        lowercase.push_back(std::tolower(letter));
    }
    return lowercase.find(number);
}

void ReplaceNum(std::string &text, std::string const &seek, std::string const &replacement){
    for (std::string::size_type pos = FindNum(text,seek); pos != std::string::npos; pos = FindNum(text, seek)){
        text.replace(pos, seek.size(), replacement);
    }
}
    
void To_Digits(std::string &input){
    ReplaceNum(input, "zero", "0");
    ReplaceNum(input, "one", "1");
    ReplaceNum(input, "two", "2");
    ReplaceNum(input, "three", "3");
    ReplaceNum(input, "four", "4");
    ReplaceNum(input, "five", "5");
    ReplaceNum(input, "six", "6");
    ReplaceNum(input, "seven", "7");
    ReplaceNum(input, "eight", "8");
    ReplaceNum(input, "nine", "9");
}
/*
int main(){
    std::string input;
    std::getline(std::cin, input);
    To_Digits(input);
    std::cout << input << std::endl;
    
    return 0;
}
*/

    //apparently i shouldn't have a main function for this so i texted with a main