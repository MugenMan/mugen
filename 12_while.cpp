#include <iostream>
#include <string>
#include <math.h>

int main()
{
	int n,r=1;
    std::cout << "enter n" << std::endl;
	std::cin >> n;
    while(n != 0){
    r=r*n;
    std::cout << "enter n" << std::endl;
	std::cin >> n;
}
    std::cout << "product of numbers = " << r << std::endl;
    std::cout << std::endl;
	std::cin.get(); std::cin.get();
	return 0;
}