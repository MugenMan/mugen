#include <iostream>
#include <string>
#include <math.h>

int fun(int n) {
    int a=1, b=0;
	while (a <= n){
        b+=a;
        a+=2;
        std::cout << "b = " << b << std::endl;
        std::cout << "a = " << a << std::endl;
    }
		return b;
}
int fun1(int n) {
    if (n<=0){ 
        return 1;
        }
    
    return fun1(n-1); 
}

int main()
{
	int n;
	std::cout << "enter n" << std::endl;
	std::cin >> n;
	std::cout << std::endl;
	
	std::cout << "sum = " << fun(n) << std::endl;
    std::cout << "summmmmmmm = " << fun1(n) << std::endl;
	

	//std::cin.get(); std::cin.get();
	return 0;
}