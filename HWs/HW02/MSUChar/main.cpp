#include <string>
#include <iostream>

int main (){
    int count = 0;
    char c;
    do {
        std::cin >> c;
        if (c=='M'|| c=='m'||c=='S'||c=='s'||c=='U'||c=='u'){
            ++count;
        }
    } while(c != '.');
}