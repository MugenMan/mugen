
#include <iostream>
#include <string>
#include <math.h>

int main()
{
	int n;
	std::cout << "enter n" << std::endl;
	std::cin >> n;
	std::cout << std::endl;
	std::cout << "task 1" << std::endl;
	for (int i = 1; i <= n; i++) {
		std::cout << i << std::endl;
	}

	std::cout << "task 2" << std::endl;
	for (int i = 1; i <= n; i++) {
		std::cout << i;
	}

	std::cout << std::endl;
	std::cout << "task 3" << std::endl;
	for (int i = 1; i <= n; i++) {
		std::cout << i;
		if (i < n)
		{
			std::cout << ",";
		}
	}

	std::cout << std::endl;
	std::cout << "task 4" << std::endl;
	for (int i = 1; i <= n; i++) {
		std::cout << "*" << std::endl;
	}

	std::cout << std::endl;
	std::cout << "task 5" << std::endl;
	for (int i = 1; i <= n; i++) {
		std::cout << "*";
	}

	std::cout << std::endl;
	std::cout << "task 6" << std::endl;
	for (int i = 1; i <= n; i++) {
		for (int i = 1; i <= n; i++) {
			std::cout << "*";
		}std::cout << std::endl;
	}
	
	std::cout << std::endl;
	std::cout << "task 7" << std::endl;
	for (int i = n; i > 0; i--) {
		std::cout << i << std::endl;
	}
	for (int i = 2; i <= n; i++) {
		std::cout << i << std::endl;
	}

	std::cout << std::endl;
	std::cout << "task 8" << std::endl;
	for (int i = n; i > 0; i--) {
		for (int j = 0; j < i; j++) {
			std::cout << "*";
		}
		std::cout << std::endl;
	}
	
	for (int i = n,j = 2; i > 0; i--) {
		for (int i = j; i > 0 && i <= n; i--) {
			std::cout << "*";
		}j++;
		std::cout << std::endl;
	}
	
	
	std::cout << "task 9" << std::endl;
	
	for (int i = n; i > 0; i--) {
		for (int j = n; i < j; j--)
		{
			std::cout << "p";
		}
		for (int j = 0; i > j; j++) {
			std::cout << "*";
		}
		for (int j = 1; i > j; j++) {
			std::cout << "*";
		}
		std::cout << std::endl;
	}
	for (int i = n; i > 0; i--) {
		for (int j = 2; j < i; j++) {
			std::cout << "p";
		}
		std::cout << std::endl;
	}
	std::cout << std::endl;
	std::cin.get(); std::cin.get();
	return 0;
}