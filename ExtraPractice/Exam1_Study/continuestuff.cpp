#include <iostream>
#include <string>

int main(){
    for (int x=0; x<4; ++x){
        if (x==2){
            continue;
        }
        std::cout<<x<<std::endl;
    }
}

/*If x=0 and its less than 4, it will print,
and then the ++x lets it increement

so it prints " 0 ", and then 1<4 but not equal to 2,
so it prints " 1 ", and then 2<4 but 2==2 so 
conitnue occurs and the 2 does not print, now conitnueing
to 3<4 but not ==2 so it prints " 3 " and then 4 IS NOT > 4
so it stops

it will print 0, 1, 3 */