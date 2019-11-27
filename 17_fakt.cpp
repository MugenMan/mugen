#include <iostream>
#include <string>
#include <math.h>

int main()
{
	int n,f=1,f2=1,f3=1;
    std::cout << "enter number n: " << std::endl;
	std::cin >> n;

    for (int i = 1; i <n; i++){
        f=f*(i+1);
    } 
    
   
    do {
        f2=f2*(f2+1);
    } 
    while (f2==720);

    while (f3!=f){
        f3=f3*(f3+1);
    }

    std::cout << "fakt for = " << f << std::endl;
    std::cout << "fakt do while = " << f2 << std::endl;
    std::cout << "fakt while = " << f3 << std::endl;
        return 0;
}