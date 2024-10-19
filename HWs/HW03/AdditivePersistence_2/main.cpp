#include <iostream>
int main() {
	int value{0};
	while (std::cin >> value) {
		int root{0};
    while(value >=100){
      int digitsum{0};
      while(value){
        digitsum +=value%10;
        value/=10;
        digitsum+= (value %10) *10;
        value/= 10;
      }
      value = digitsum;
    }
    root = value;
		std::cout << root << std::endl;
	}
}