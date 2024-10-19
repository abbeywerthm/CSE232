#include <iostream>
#include <climits>

int main(){
    int a, b, c;
    while(std::cin>>a>>b>>c){
        int smallest_diff = INT_MAX;
        if (a >= b && a-b<smallest_diff){
        smallest_diff= a-b;
        }
        if (a < b && b-a < smallest_diff){
        smallest_diff= b-a;
        }
        if (a >= c && a-c <smallest_diff){
        smallest_diff= a-c;
        }
        if (a < c && c-a <smallest_diff){
        smallest_diff= c-a;
        }
        if (b >= c && b-c <smallest_diff){
        smallest_diff= b-c;
        }
        if (b < c && c-b <smallest_diff){
        smallest_diff= c-b;
        }
        std::cout<<"The smallest diff of "<<a<<", "<<b<<", and "<<c<< " is "<<smallest_diff<<"."<<std::endl;
    }
}