#include <iostream>
#include <string>
#include <math.h>

int fib(int n) {
	if (n==1 || n==2){ //базовый случай
        return 1;
    }
    return fib(n-1)+fib(n-2);
}


int main()
{
	int n;
	std::cout << "enter n" << std::endl;
	std::cin >> n;
	std::cout << std::endl;
	
	std::cout << "fib = " << fib(n) << std::endl;
	

	//std::cin.get(); std::cin.get();
	return 0;
}