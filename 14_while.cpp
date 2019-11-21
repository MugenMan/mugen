#include <iostream>
#include <string>
#include <math.h>

int main()
{
	int n,r=0;
    std::cout << "enter n" << std::endl;
	std::cin >> n;
    while(n != 0){
    r=r+n%10;
    n=n/10;
    std::cout << "n = " << n << std::endl;
}
    std::cout << "sum of digits in number = " << r << std::endl;
    
    std::cout << std::endl;
	std::cin.get(); std::cin.get();
	return 0;
}