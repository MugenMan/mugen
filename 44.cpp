#include <iostream>
#include <string>
#include <stdlib.h>

int main(){
    int number, three, one, ten, hudred, order, c=0;
    std::string ones[]={"","one","two","three", "four", "five", "six", "seven", "eight", "nine"};
    std::string tens[]={"", "", "twenty", "thirty", "forty", "fivty", "sixty", "seventy", "eighty", "ninty"};
    std::string teens[]={"ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
    std::string orders[]={"", "thousand", "million", "billion"};
    std::string a;
    std::string r;
    std::string a3;
    std::cout << "Enter string: " << std::flush;
    std::cin>> number;

    
    while (number !=0){
        three = number%1000;
        number = number / 1000;
        one = three % 10;
        ten = three % 100/10;
        hudred = three / 100;
        order = three %1000/10;
        a = " ";
        
        c++;
        if (ten == 1){
            a = teens[one];
        }
        else {
            a = tens[ten]+" " + ones[one];
        }
        

        if (hudred != 0){
            a = ones[hudred] + " hundred " + a;
            r = a +orders[c] + r;
        }
        //a = ones[hundred] + " hundred " + a;
        
        std::cout << "one= " << one <<std::endl;
        std::cout << "ten= " << ten <<std::endl;
        std::cout << "hudred= " << hudred <<std::endl;
        std::cout << "order= " << order <<std::endl;
        std::cout << "a= " << a <<std::endl;
        std::cout << "r= " << r <<std::endl;
        //
        //r = buffer + orders[order]+r;
    }
}