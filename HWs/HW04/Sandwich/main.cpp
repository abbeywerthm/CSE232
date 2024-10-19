#include <iostream>
#include <string>

char * Sandwich(std::string & line, char *bread_ptr) {
	for (int Sandwich_index_start = 0;
	    Sandwich_index_start < static_cast<int>(line.size())-2;
			++Sandwich_index_start) {
		bool first_bread_match = *bread_ptr == line[Sandwich_index_start];
		bool last_bread_match = *bread_ptr == line [Sandwich_index_start +2];
		if (!first_bread_match || !last_bread_match){
			continue;
		}
		return &line[Sandwich_index_start +1];
	}
	return nullptr;
}

int main() {
	std::string line = "Char is a character";
	char bread = 'a';
	char * filling_ptr = Sandwich(line, &bread);
	std::cout << *filling_ptr << std::endl; // Should be r
}
