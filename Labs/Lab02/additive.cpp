#include <iostream>
#include <string>

int main() {
    int value{0};
    while (std::cin>>value){
        if (value<0){
            break;
        }
        int additive_persistence {0};
        while(value>= 10){
            ++additive_persistence;
            int sum_of_digits {0};
            while (value){
                sum_of_digits += value %10;
                value /=10;
            }
            value = sum_of_digits;
        }
        std::cout<<additive_persistence<<" "<<value<<std::endl;
    }
    return 0;
}