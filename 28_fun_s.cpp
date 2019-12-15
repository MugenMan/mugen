#include <iostream>
#include <string>
#include <math.h>

int fun(int n) {
    int a=n;
	while (n!=1){
       if (n%2==0){
           n-=1;
           a-=1;
       }
       n-=2;
       a+=n;
    }
		return a;
}
int sum(int n) {
    if (n%2==0){ 
        n-=1;
    }
    if (n==1){
        return 1;
    } 
    return sum(n-2)+n; 
}

int main()
{
	int n;
	std::cout << "enter n" << std::endl;
	std::cin >> n;
	std::cout << std::endl;
	
	std::cout << "sum_for = " << fun(n) << std::endl;
    std::cout << "sum = " << sum(n) << std::endl;
	

	//std::cin.get(); std::cin.get();
	return 0;
}