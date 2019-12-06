#include <iostream>
#include <string>
#include <math.h>

void reverse(int n) {
    int a=n;
    if (n%10==2 || n/10==0 ){
        a=n%10;
        n/=10;
        std::cout << a;
    }std::cout << std::endl;return;


	// while(n != 0){
    // a=n%10;
    // n/=10;
    
}


int main()
{
	int n;
	std::cout << "enter n" << std::endl;
	std::cin >> n;
	std::cout << std::endl;
	
	reverse(n);

	//std::cin.get(); std::cin.get();
	return 0;
}