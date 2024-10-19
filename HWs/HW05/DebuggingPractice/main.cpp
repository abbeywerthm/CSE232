#include <iostream>
#include <string>
#include "WordList.h"

int main() {
    std::string word1;
    std::string word2;
    std::string word_list;

    std::cin >> word1;
    std::cin >> word2;
    std::cin.ignore();  
    
    while (std::getline(std::cin, word_list)) {
        std::cout << GetFirstInList(word_list, &word1, &word2) << " "
                << CountInList(word_list, word1) << " "
                << CountInList(word_list, word2) << std::endl;
    }
    return 0;
}
