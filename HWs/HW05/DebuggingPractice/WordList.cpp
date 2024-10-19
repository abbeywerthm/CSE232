#include <string>
#include "WordList.h"

bool AtListPosition(const std::string& word_list, const std::string& word, size_t pos) {
    size_t end_pos = pos + word.size();
    if (end_pos > word_list.size()) return false;
    if (word_list.substr(pos, word.size()) != word) return false;
    if (pos != 0 && word_list[pos - 1] != ',') return false;
    if (end_pos != word_list.size() && word_list[end_pos] != ',') return false;

    return true;
}

size_t FindInList(const std::string& word_list, const std::string& word, size_t pos) {
    while (true) {
        pos = word_list.find(word, pos);
        if (pos == std::string::npos) {
        return pos;
        }
        if (AtListPosition(word_list, word, pos)) {
        return pos;
        }
        pos++;  
    }
}


std::string GetFirstInList(const std::string& word_list, std::string* word1_ptr, std::string* word2_ptr) {
    size_t pos1 = FindInList(word_list, *word1_ptr);
    size_t pos2 = FindInList(word_list, *word2_ptr);
    
    if (pos1 == std::string::npos && pos2 == std::string::npos) {
        return "N/A";
    } else if (pos1 != std::string::npos && (pos2 == std::string::npos || pos1 < pos2)) {
        return *word1_ptr;
    } else {
        return *word2_ptr;
    }
}

size_t CountInList(const std::string& word_list, const std::string& word) {
    size_t count = 0;
    size_t pos = 0;

    while ((pos = FindInList(word_list, word, pos)) != std::string::npos) {
        count++;
        pos += word.length();  
    }
    return count;
}
