#include <string>
#include "header.h"

int Dog::RelativeAge(){ /* his indicates that relative age is a member
                        //function of the Dog class. if it was 
                        //int Dog = RelativeAge(); you'd be declaring a 
                        variable */


    int relative_age =0;
    if (true_age_ >=1) {
        relative_age +=15;
    }
    if (true_age_ >= 2){
        relative_age +=9;
    }
    int years_after_2 = true_age_ - 2;
    if (years_after_2 > 0){
        relative_age += years_after_2 * 5;
    }
    return relative_age;
}