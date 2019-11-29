#include <iostream>
#include <string>
#include <math.h>

void fiba(int x){

    for (int i = x; i > 0; i -= 2) {
		for (int j = 0; j < (x - i) / 2; j++) {
			std::cout << " ";
		}
		for (int j = 0; j < i; j++) {
			std::cout << "*";
		}
		std::cout << std::endl;
	}
	for (int i = 2; i < x; i += 2) {
		for (int j = 0; j < (x - i) / 2; j++) {
			std::cout << " ";
		}
		for (int j = 0; j <= i; j++) {
			std::cout << "*";
		}
		std::cout << std::endl;
	}
    
        return;
    }

int main()
{
	int N, otv;
    std::cout << "enter N: " << std::endl;
	std::cin >> N;

    std::cout << "fib = " << otv << std::endl;
   
        return 0;
}