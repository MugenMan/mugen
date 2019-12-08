#include <iostream>
#include <string>
#include <math.h>
void fun(int n){
    // if(n == 0)
    //     return;
    // else{
    //     std::cout << n % 10; 
        
    //     fun(n/10); 
    // }

	if(n == 0){
        return;
		}
    else {
        fun(n/10); 
    }
	if (n % 10==9) {
		std::cout << "0"; 
        //fun(n/10);
		}else
	std::cout << n % 10+1; 
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