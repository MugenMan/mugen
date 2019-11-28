#include <iostream>
#include <string>
#include <math.h>

int main()
{
	int n,fib=1, a=1,b=1,i=2;
    std::cout << "enter n: " << std::endl;
	std::cin >> n;

    
    while (i < n){
        fib=a+b;
        a=b;
        b=fib;
        i++;
    }


    std::cout << "fib = " << fib << std::endl;
   
        return 0;
}