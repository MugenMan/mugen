#include <iostream>
#include <string>

int main(){
    int a, b, c = 0;
    std::string ones[]={"","one","two","three", "four", "five", "six", "seven", "eight", "nine"};
    std::string tens[]={"", "", "twenty", "thirty", "forty", "fivty", "sixty", "seventy", "eighty", "ninty"};
    std::string s3[]={"ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
    std::string s4[]={"", "thousand", "million", "billion", "trillion"};
    std::string number;

    std::cout << "Enter string: " << std::flush;
    //std::getline(std::cin, s); //вывод с пробелами

    std::cin>> a;
    b = a;
    while (b != 0){
        b = b/10;
        c++;
    }
    std::cout<<c<<std::endl;
    for (int i = 0; i < 10; i++){
        
        if (c == 1){
            if (i == a){
                std::cout << ones[i] <<std::endl;
            }
        }
        if (c == 2){
            if (i==1 && i*10==a){
                std::cout << s3[0] <<std::endl;
            }
            if (i*10 == a){
                std::cout << tens[i] <<std::endl;
            }
        }
        
        // if (i == a){
        //     number[i]=ones[i];
            
        // }
        // number[i]=

        // if {

        // }

        // if{

        // }
        
        
        
        
        
        
        
        // if (a==0){

        // }
    }


}