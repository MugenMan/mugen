#include <iostream>
#include <string>
#include <math.h>

void fun(int n) {
    int a=n;
	while(n != 0){
    a=n/10;
    n/=10;
    std::cout << a;
    std::cout << "fact = " << a << std::endl;

}std::cout << std::endl;
}


int main()
{
	int n;
	std::cout << "enter n" << std::endl;
	std::cin >> n;
	std::cout << std::endl;
	
	fun(n);

	//std::cin.get(); std::cin.get();
	return 0;
}