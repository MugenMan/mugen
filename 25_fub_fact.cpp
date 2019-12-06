#include <iostream>
#include <string>
#include <math.h>

int fact(int n) {
	if (n==0){ //базовый случай
        return 1;
        }
    
    return fact(n-1)*n; //рекурсивная формула
}


int main()
{
	int n;
	std::cout << "enter n" << std::endl;
	std::cin >> n;
	std::cout << std::endl;
	
	std::cout << "fact = " << fact(n) << std::endl;
	

	//std::cin.get(); std::cin.get();
	return 0;
}