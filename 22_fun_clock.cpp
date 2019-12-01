#include <iostream>
#include <string>
#include <math.h>

void fiba(int x, int t=0){

    for (int i = x; i > 0; i -= 2) {
		for (int j = 0-t; j < (x - i) / 2; j++) {
			std::cout << " ";
		}
		for (int j = 0; j < i; j++) {
			std::cout << "*";
		}
		std::cout << std::endl;
	}
	for (int i = 2; i < x; i += 2) {
		for (int j = 0-t; j < (x - i) / 2; j++) {
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

	fiba(N,0);
	fiba(N-2,+1);
	fiba(N-4,+2);
	
   
        return 0;
}