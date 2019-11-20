#include <iostream>
#include <string>
#include <math.h>

int main()
{
	int n;
	
	do {
	std::cout << "enter odd n" << std::endl;
	std::cin >> n;
	std::cout << std::endl;
	} while (n%2 ==0);
    
for (int i = n; i > 0; i -= 2) {
		for (int j = 0; j < (n - i) / 2; j++) {
			std::cout << " ";
		}
		for (int j = 0; j < i; j++) {
			std::cout << "*";
		}
		std::cout << std::endl;
	}
	for (int i = 2; i < n; i += 2) {
		for (int j = 0; j < (n - i) / 2; j++) {
			std::cout << " ";
		}
		for (int j = 0; j <= i; j++) {
			std::cout << "*";
		}
		std::cout << std::endl;
	}



	std::cout << std::endl;
	std::cin.get(); std::cin.get();
	return 0;
}