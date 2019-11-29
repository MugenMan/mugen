#include <iostream>
#include <string>
#include <math.h>

int fiba(int x){
    int fib=1, a=1,b=1,i=2;
    while (i < x){
        fib=a+b;
        a=b;
        b=fib;
        i++;
    }
        return fib;
    }

int main()
{
	int N, otv;
    std::cout << "enter N: " << std::endl;
	std::cin >> N;
    otv = fiba(N);

    std::cout << "fib = " << otv << std::endl;
   
        return 0;
}