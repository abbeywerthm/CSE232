#include <vector>
#include <iostream>
#include <string>
#include <sstream>

std::string Two_D_Vector_To_String(std::vector<std::vector<char>> vec){
    std::stringstream os;
    for(int i = 0; i < static_cast<int>(vec.size()); i++){
        for(int j = 0; j < static_cast<int>(vec.at(i).size()); j++){
        os << vec.at(i).at(j) << " ";
        }
        os << "\n";
    }
    return os.str();
    }

    //Starting point of every spiral is the 0 in the center

    //need it to go right up increase then left down increase

    std::vector<std::vector<char>> Counting_Spiral(int length){
    std::vector<std::vector<char>> Spiral_Vector(length, std::vector<char>(length, '0'));
    int x = length/2;
    int y = length/2;
    int counter = 0;

    Spiral_Vector[y][x] = (counter%10)+'0';
    
    int linelength = 1;
    
    while(linelength<length){
        for (int i = 0; i<linelength; i++){
        x++; //right
        counter++;
        Spiral_Vector[y][x]= (counter%10)+'0';
        }
        for (int i = 0; i<linelength; i++){
        y--; //up
        counter++;
        Spiral_Vector[y][x]= (counter%10)+'0';
        }
        linelength++; //helps to increment the linelength after mvoing down and left
        
        for (int i = 0; i<linelength; i++){
        x--; //left
        counter++;
        Spiral_Vector[y][x]= (counter%10)+'0';
        }
        for (int i = 0; i<linelength; i++){
        y++; //down
        counter++;
        Spiral_Vector[y][x]= (counter%10)+'0';
        }
        linelength++; //increases it after moving down n left
    }
    for (int i= 0; i<linelength; i++){
        x++;
        counter++;
        Spiral_Vector[y][x]= (counter%10)+'0';
    }
    return Spiral_Vector;
}

