#include <iostream>
#include <string>

int main(){
    int a,b,c;
    std::cout <<"Enter number a,b,c" <<std::endl;
    std::cin >> a;
    std::cin >> b;
    std::cin >> c;
    std::cout <<"a = "<< a << std::endl;
    std::cout <<"b = "<< b << std::endl; 
    std::cout <<"c = "<< c << std::endl;  

    if (c==a){
        std::cout <<"c=a"<< std::endl; 
    }
    else if (c==b){
        std::cout <<"c=b"<< std::endl; 
    }
    else if (c<a) {
        std::cout <<"c<a"<< std::endl;
    }
    else if (c>b){
        std::cout <<"c>b"<< std::endl; 
    }
    else {
        std::cout <<"c>a c<b"<< std::endl; 
    }
    return 0;
}