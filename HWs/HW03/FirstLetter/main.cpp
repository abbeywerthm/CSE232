#include <iostream>
#include <cctype>

int main(){
    std::cin>>std::noskipws;
    char character;
    bool letter_before=false;
    while(std::cin>>character){
        bool letter_now = std::isalpha(character);
        if (!letter_before && letter_now) {
            std::cout<<character;
        }
        letter_before = letter_now;
    }
}
