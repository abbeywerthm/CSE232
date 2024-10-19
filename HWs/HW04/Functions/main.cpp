#include <iostream>
#include <string>

using namespace std;

int Dist(int a, int b){
    int difference = a-b;
    if(difference>=0){
        return difference;
    }
    return -difference;
}

int Closest_Multiple_Of_13(int x){
    int factor_close_to_0= x /13;
    int factor_father_from_0= factor_close_to_0;
    if (x>0){
        ++factor_father_from_0;
    } else {
        --factor_father_from_0;
    }
    int multiple_closer_to_0 = factor_close_to_0 *13;
    int multiple_farther_from_0 = factor_father_from_0 *13;
    if (Dist(multiple_closer_to_0,x)< Dist(multiple_farther_from_0,x)){
        return multiple_closer_to_0;
    }
    return multiple_farther_from_0;
    }

    int Triple(int x){
    return x * 3;
    }

    int main(){
    int x;
    std::cin>> x;
    std::cout<< x*2<<std::endl;
}