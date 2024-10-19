#include <string>
#include <algorithm>
#include <iostream>

int Numberofmatches(char a, char b, char c){
    int matches = 0;
    if(a != '\0' && b != '\0' && a==b){
        ++matches;
    }
    if(a != '\0' && c != '\0' && a==c){
        ++matches;
    }
    if(b != '\0' && b != '\0' && b==c){
        ++matches;
    }
    return matches;
}

std::string SharedLetters(std::string const &a, std::string const b, std::string const *const ptr_c) {
    std::string const c = *ptr_c;
    std::string result;
    std::size_t len_a = a.size();
    std::size_t len_b = b.size();
    std::size_t len_c = c.size();
    
    for (std::size_t i = 0; i < len_a || i < len_b || i < len_c; ++i) {
        char char_a = (i < len_a) ? a.at(i) : '\0'; 
        char char_b = (i < len_b) ? b.at(i) : '\0'; 
        char char_c = (i < len_c) ? c.at(i) : '\0'; 

        int matches = Numberofmatches(char_a, char_b, char_c);
        result += std::to_string(matches) + ",";
    }

    return result;
}

int main(){
    std::string a,b,c;
    std::cin >>a>>b>>c;
    std::cout<< SharedLetters(a,b, &c)<<std::endl;

    return 0;
}