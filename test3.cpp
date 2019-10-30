#include <iostream>
#include <string>
#include <math.h>
int main(){
    int a,b,c;

    std::cout <<"Enter variable value a: " <<std::endl;
    std::cin >> a;
    std::cout <<"Enter variable value b: " <<std::endl;
    std::cin >> b;
    std::cout <<"Enter variable value c: " <<std::endl;
    std::cin >> c;
    std::cout <<"variable value a=" << a <<std::endl;
    std::cout <<"variable value b=" << b <<std::endl;
    std::cout <<"variable value c=" << c <<std::endl;

    int answer = (int)(((a*sqrt(a+b)))/(2*c));
    std::cout <<"answer= " << answer <<std::endl;
    return 0;
}