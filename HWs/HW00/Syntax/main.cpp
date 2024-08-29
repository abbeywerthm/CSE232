# include <string>
# include <iostream>
# include <cctype>
# include <algorithm>

std::string GetInput();
std::string MakeAllCaps(std::string); //added this

int main (){
    std::string songwriter_name = GetInput(); //added ()
    std::string songwriter_name_caps = MakeAllCaps(songwriter_name);
    std::cout << "My favorite songwriter is " << songwriter_name_caps << "!\n"; 
}

//Freeze code begin
std::string GetInput(){
    std::string line;
    std::getline(std::cin, line);
    return line;
}

std::string MakeAllCaps (std::string line) {
    std::transform(line.begin(), line.end(),line.begin(), ::toupper);
    return line;
}

