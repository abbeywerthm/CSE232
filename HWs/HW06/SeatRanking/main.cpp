//THIS CODE NEEDS EDITING SO CHECK WITH SOLUTION NEXT WEEK


#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <fstream>
#include <iomanip>
#include <cmath>

const int Rows = 10;
const int Columns = 20;

void fixseatvalue(std::vector<std::vector<int>>& grid, int fanX, int fanY) {
    // Adjust surrounding seat values based on the fan's position
    for (int x = 0; x < Columns; ++x) {
        for (int y = 0; y < Rows; ++y) {
        int dx = abs(x - fanX);
        int dy = abs(y - fanY);
        int distance = dx + dy;
        if (distance == 1) {
            grid[y][x] -= 40;
        } else if (distance == 2) {
            grid[y][x] -= 20;
        }
        }
    }
    // Mark the fan's position with -1 (to indicate a fan)
    grid[fanY][fanX] = -1;
    }

    int main() {
    std::vector<std::vector<int>> grid(Rows, std::vector<int>(Columns, 0));
    std::vector<std::pair<int, int>> superFans;

    // Read the input file for super fan coordinates
    std::ifstream inputFile("input.txt");
    std::string line;

    while (std::getline(inputFile, line)) {
        int x, y;
        char ignore;
        std::stringstream ss(line);
        while (ss >> ignore >> x >> ignore >> y >> ignore) {
        superFans.emplace_back(x, y);
        }
    }

    // Initialize grid values
    for (int y = 0; y < Rows; ++y) {
        for (int x = 0; x < Columns; ++x) {
        grid[y][x] = 100 - (y * 5);
        }
    }

    // Apply the fan effects to the grid
    for (const auto& fan : superFans) {
        fixseatvalue(grid, fan.first, fan.second);
    }

    // Output the grid
    for (int y = Rows - 1; y >= 0; --y) {
        if (grid[y][0] >= 100) {
        std::cout << " ";
        } else {
        std::cout << "  ";
        }

        for (int x = 0; x < Columns; ++x) {
        if (grid[y][x] == -1) {
            std::cout << " *,";
        } else {
            std::cout << std::setw(2) << grid[y][x] << ",";
        }
        if (x < Columns - 1) {
            if (grid[y][x] >= 100) {
            std::cout << " ";
            } else {
            std::cout << "  ";
            }
        }
        }
        std::cout << std::endl;
    }

    return 0;
}
