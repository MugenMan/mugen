#include <iostream>
#include <string>
#include <math.h>
void fun(int n){

	if(n == 0){
        return;
		}
    else {
        fun(n/10); 
    }
	std::cout << (n % 10+1) % 10;
}



int main()
{
	int n;
	std::cout << "enter n" << std::endl;
	std::cin >> n;
	std::cout << std::endl;
	
	fun(n);
	std::cout << std::endl;
	//std::cin.get(); std::cin.get();
	return 0;
}