#include <iostream>
#include <string>

int main() {
    int val_a, val_b;
    std::string unit_a, unit_b;
    while(std::cin>>val_a>>unit_a>>val_b>>unit_b){
        int a_into_mm, b_into_mm;
        if (unit_a=="mm") {
            a_into_mm =val_a;
        } else if (unit_a=="cm"){
            a_into_mm = val_a *10;
        } else if (unit_a == "m"){
            a_into_mm = val_a *1000;
        } else if (unit_a == "km"){
            a_into_mm = val_a *1000*1000;
        } else {
            std::cout<<"Error";
        } if (unit_b=="mm") {
            b_into_mm =val_b;
        } else if (unit_b=="cm"){
            b_into_mm = val_b *10;
        } else if (unit_b == "m"){
            b_into_mm = val_b *1000;
        } else if (unit_b == "km"){
          b_into_mm = val_b *1000*1000;
        } else{
            std::cout<<"Error";
        }
        
        std::string comparison(" is the same as ");
        if (a_into_mm > b_into_mm){
            comparison = " is larger than ";
        } else if (a_into_mm < b_into_mm){
            comparison = " is smaller than ";
        }
        std::cout<< val_a<<unit_a<<comparison<<val_b<<unit_b<<std::endl;
    }
}