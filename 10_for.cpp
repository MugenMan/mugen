#include <iostream>
#include <string>
#include <math.h>

int main()
{
    int n;
	std::cout << "enter n" << std::endl;
	std::cin >> n;
	std::cout << std::endl;

	std::cout << "task 1" << std::endl;
for (int i = 0; i < n; i++){
    for (int j = 0; j < n; j++){
        if (i == j){
            std::cout << "*";
        }else{
            std::cout << ".";
        }
    }
    std::cout << std::endl;
}


std::cout << "task 2" << std::endl;
for (int i = 0; i < n; i++){
    for (int j = 0; j < n; j++){
        if (j==n-i-1){
            std::cout << "*";
        }else{
            std::cout << ".";
        }
    }
    std::cout << std::endl;
}

std::cout << "task 3" << std::endl;
for (int i = 0; i < n; i++){
    for (int j = 0; j < n; j++){
        if ((i==j) || (j==n-i-1)){
            std::cout << "*";
        }else{
            std::cout << ".";
        }
    }
    std::cout << std::endl;
}

std::cout << std::endl;

std::cout << "task 4" << std::endl;
for (int i = 0; i < n; i++){
    for (int j = 0; j < n; j++){
        if (i >= j){
            std::cout << "*";
        }else{
            std::cout << ".";
        }
    }
    std::cout << std::endl;
}
    std::cout << std::endl;

std::cout << "task 5" << std::endl;
for (int i = 0; i < n; i++){
    for (int j = 0; j < n; j++){
        if ( (j >= i) && (j <= n-i-1) ){
            std::cout << "*";
        }else{
            std::cout << ".";
        }
    }
    std::cout << std::endl;
}
    std::cout << std::endl;

std::cout << "task 6" << std::endl;
for (int i = 0; i < n; i++){
    for (int j = 0; j < n; j++){
        if ( ((j <= i) || (j >= n-i-1)) && 
        ( (j >= i) || (j <= n-i-1) ) ){
            std::cout << "*";
        }else{
            std::cout << ".";
        }
    }
    std::cout << std::endl;
}
    std::cout << std::endl;

std::cout << "task 7" << std::endl;
for (int i = 0; i < n; i++){
    for (int j = 0; j < n; j++){
        if ( ((j <= i) && (j >= n-i-1)) || 
        ( (j >= i) && (j <= n-i-1) ) ){
            std::cout << "*";
        }else{
            std::cout << ".";
        }
    }
    std::cout << std::endl;
}
    std::cout << std::endl;

	std::cin.get(); std::cin.get();
	return 0;
}