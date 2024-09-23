#include <string>
#include <iostream>

std::string InBrackets(std::string const & str){
    std::string::size_type start_index = str.find('(');
    std::string::size_type end_index = str.find(')');
    if (start_index == std::string::npos || end_index == std::string::npos ||end_index < start_index){
        return "";
    }
    return str.substr(start_index +1, end_index-start_index-1);
}


int main(){
    std::string input;

    std::cout <<"Enter parentheses in string wherever: ";
    std::getline(std::cin,input);

    std::string result = InBrackets(input);

    if (result.empty()){        //if you did (result.empty){ } this wouldn't
                    //call and check the function and would cause boolean instead
        std::cout<<"no valid parentheses"<<std::endl;
    } else {
        std::cout<<"In parentheses: "<<result<<std::endl;
    }
}

