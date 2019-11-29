#include <iostream>
#include <string>
#include <math.h>

int factorial(int x){
    int i = 1, r = 1;
    while (i <= x){
            r*=i;
            i++;
        }
        return r;
    }

int main()
{
	int N, M, otv;
    std::cout << "enter N,M: " << std::endl;
	std::cin >> N;
    std::cin >> M;

    while (N <= M){
    std::cout << "N must > M: repeat enter" << std::endl;
	std::cin >> N;
    std::cin >> M;

    }
    
    otv=factorial(N)/(factorial(M) * (factorial(N-M)));
    std::cout << "otv = " << otv << std::endl;
   
        return 0;
}