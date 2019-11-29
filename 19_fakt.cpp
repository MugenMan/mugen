#include <iostream>
#include <string>
#include <math.h>

int main()
{
	int N, M, N_f=1,M_f=1,N_M=1,i=1,j=1,k=1, otv;
    std::cout << "enter N,M: " << std::endl;
	std::cin >> N;
    std::cin >> M;

    while (N <= M){
    std::cout << "N must > M: repeat enter" << std::endl;
	std::cin >> N;
    std::cin >> M;

    }
    
    while (i <= N){
        N_f*=i;
        i++;
    }
    while (j <= M){
        M_f*=j;
        j++;
    }
    while (k <= N-M){
        N_M*=k;
        k++;
    }

    otv=N_f/(M_f * N_M);


    std::cout << "N_f = " << N_f << std::endl;
    std::cout << "M_f = " << M_f << std::endl;
    std::cout << "N_M = " << N_M << std::endl;
    std::cout << "otv = " << otv << std::endl;
   
        return 0;
}