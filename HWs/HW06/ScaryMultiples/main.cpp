#include <stdexcept>
#include <vector>

int SumButScared(std::vector<int> const& input){
    int sum{0};
    for (int value : input){
        if (value % 13==0){
        throw std::invalid_argument("Found a multiple of 13.");
        }
        sum += value;
    }
    return sum;
}