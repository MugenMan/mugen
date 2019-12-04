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
	int N=0;
    std::cout << "enter N: " << std::endl;
	std::cin >> N;
	
	for (int i = N; i > 0; i -= 2){
		fiba(i,(N - i) / 2);	
	}
	for (int i = 3; i <= N; i += 2){
		fiba(i,(N - i) / 2);	
	}
	
   
        return 0;
}