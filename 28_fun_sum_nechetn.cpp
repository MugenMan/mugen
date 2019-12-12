#include <iostream>
#include <string>
#include <math.h>

int fun(int n) {
    int a=1, b=0;
	while (a <= n){
        b+=a;
        a+=2;
    }
		return b;
}
int sum(int n) {
    if (n%2==0){ 
        n-=1;
    }
    if (n==1){
        return 1;
    } 
    return sum(n-1)+n; 
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