#include <iostream>
#include <iomanip>
#include <cctype>

int main(){
    std::cin >> std::noskipws;
    char char_before{'\0'};
    char character{'\0'};
    while(std::cin>>character){
        if (character == '\n'){
            std::cout<< std::endl;
            char_before = '0';
            continue;
        }
        if (character> char_before){
            std::cout<<character;
        } else {
            std::cout<<'_';
        }
        char_before = character;
    }
}

