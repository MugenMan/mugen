#include <iostream>
#include <string>
#include <math.h>

int main()
{
	int n,r;
    std::cout << "enter n" << std::endl;
	std::cin >> n;
    r=n;
    while(n != 0){
    std::cout << "enter n" << std::endl;
	std::cin >> n;
    
    r=r*n;
    std::cout << "r = " << r << std::endl;
	
}
    

    std::cout << std::endl;
	std::cin.get(); std::cin.get();
	return 0;
}