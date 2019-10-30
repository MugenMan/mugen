#include <iostream>
#include <string>

int main(){
    int n;
    std::cout <<"Enter number n" <<std::endl;
    std::cin >> n;
    std::cout <<"n = "<< n << std::endl;  

    if (n > 0) {
        std::cout <<"n > 0"<< std::endl;   
    } else if (n == 0) {
        std::cout <<"n = 0"<< std::endl; 
    } else {
        std::cout <<"n < 0"<< std::endl;   
    }
    return 0;
}