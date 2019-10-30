#include <iostream>
#include <string>

int main(){
    int n;
    std::cout <<"Enter number n" <<std::endl;
    std::cin >> n;
    std::cout <<"n = "<< n << std::endl;  

    if (n%2==0) {
        std::cout <<"Number even"<< std::endl;
    } else {
        std::cout <<"Number odd"<< std::endl; 
    }

   
    return 0;
}