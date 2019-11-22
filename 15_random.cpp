#include <iostream>
#include <string>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    
    int n,p=1;
    int x = rand()%(100-1+1)+1;
    std::cout << "x = " << x << std::endl;
    std::cout << "enter n" << std::endl;
	std::cin >> n;
    
    
    std::cout << std::endl;
    
    while (n != x){
    if (n < x){
        std::cout << "entered number is less specified" << std::endl;
    } else {
        std::cout << "entered number is greater specified" << std::endl;
    }

	std::cout << std::endl << "entered number n" << std::endl;
   
    std::cin >> n;

    p++;
    std::cout << std::endl;
    }

    
    std::cout << "number guessed, number of attempts = " << p << std::endl;
    std::cout << std::endl;
	return 0;
}