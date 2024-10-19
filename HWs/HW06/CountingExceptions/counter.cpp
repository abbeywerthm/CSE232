#include <vector>
#include <string>
#include <stdexcept>
#include "name_checker.hpp"

std::vector<int> CountExceptions(std::vector<std::string> const& input) {
    std::vector<int> result = {0, 0, 0}; 

    for (const std::string& name : input) {
        try {
            CheckName(name); 
        } catch (const std::invalid_argument& e) {
            ++result[0]; 
        } catch (const std::length_error& e) {
            ++result[1]; 
        } catch (const std::out_of_range& e) {
            ++result[2]; 
        }
    }
    return result; 
}
