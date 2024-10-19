#include <string>

int Repeat (int x){
    return x*2;
}

std::string Repeat(char x){
    return std::string(2,x);
}

std::string Repeat(std::string x){
    return x + " "+ x;
}