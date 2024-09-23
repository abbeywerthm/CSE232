#include <iostream>
#include <string>

char & FirstVowel(std::string & str) {
    for (char & c : str){
        switch (c){
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                return c;
        }
    }
    str.push_back('a');
    return str.at(str.size()-1);
}

int main(){

    std::string word;
    std::getline(std::cin, word);
    char & firstVowel = FirstVowel(word);

    std::cout<< "First vowel in \"" <<word<< "\" is:" <<firstVowel<<std::endl;
}