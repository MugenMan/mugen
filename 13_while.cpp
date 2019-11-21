#include <iostream>
#include <string>
#include <math.h>

int main()
{
	int n,r=0;
    std::cout << "enter n" << std::endl;
	std::cin >> n;

    while( (r < 100) && (n < 100) ){
    r=r+n;
    std::cout << "enter n" << std::endl;
	std::cin >> n;
}
    r=r+n;
    std::cout << "sum of numbers = " << r << std::endl;
    std::cout << std::endl;
	std::cin.get(); std::cin.get();
	return 0;
}