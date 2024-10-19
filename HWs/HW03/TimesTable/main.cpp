#include <iostream>

int main(){
    int col_go, col_stop, row_go, row_stop;
    std::cin>> col_go>>col_stop>>row_go>>row_stop;
    for (int row = row_go; row<=row_stop; ++row){
        for (int col= col_go;col<= col_stop; ++col){
            std::cout<<row<<'*'<<col<<'='<<row*col;
            if(col<col_stop){
                std::cout<<", ";
            }
        }   
        std::cout<<std::endl;
    }
}