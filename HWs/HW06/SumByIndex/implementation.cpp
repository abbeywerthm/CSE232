#include <vector>
#include "header.hpp"
#include <iostream>

std::vector<int> SumByIndex(std::vector<std::vector<int>> const& ragged_vec){
    std::vector<int> result;
    int index = 0;
    while (true){
        int sum_at_index = 0;
        bool value_to_add = false;

        for (const std::vector<int>& sub_vec : ragged_vec){
            if (index < static_cast<int>(sub_vec.size())){
                sum_at_index += sub_vec.at(index);
                value_to_add=true;
            }
        }
        if (value_to_add){
            result.push_back(sum_at_index);
            ++index;
        } else {
            break;
        }
    }
    return result;
}