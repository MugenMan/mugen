#include <iostream>
#include <string>
#include <stdlib.h>

int main(){
    int number, b, c = 0, d = 0, e = 0, f = 0, i=0;
    std::string ones[]={"","one","two","three", "four", "five", "six", "seven", "eight", "nine"};
    std::string tens[]={"", "", "twenty", "thirty", "forty", "fivty", "sixty", "seventy", "eighty", "ninty"};
    std::string teens[]={"ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
    std::string orders[]={"", "thousand", "million", "billion"};
    std::string test[]={""};
    std::cout << "Enter string: " << std::flush;
    std::cin>> number;

    if (number == 0){
        std::cout << "zero" <<std::endl;
    }

    while (number != 0){
        d = number%1000;
        b = d;
        c = 0;
        while (b != 0){
            b/=10;
            c++;
        }

        e = d%100/10;
        f = d/100;

        for (int j=0; j<10; j++){ 

            if (j*1000 == d && j!=0){
                
                std::cout << ones[j] << " thousand" <<std::endl;
                break;
            }

            if (c == 1){
                if (j == d){
                    std::cout << ones[j] <<std::endl;
                }
            }

            if (c == 2){
                if (j == 1 && j*10 == d){
                    std::cout << teens[0] <<std::endl;
                    break;
                }
                
                if (j*10 == d){
                    std::cout << tens[j] <<std::endl;
                }
                if (j!=0 && 10+j == d){
                    std::cout << teens[j] <<std::endl;
                }
                if (d/10 > 1 && d%10 == j && j!=0){
                    std::cout << tens[d/10] << " " << ones[j] <<std::endl;
                }
            }

            if (c == 3 ){
                if (j*100 == d){
                    std::cout << ones[j] << " hundred" <<std::endl;
                    break;
                }
                if (e == 0 && j == f && j > 0){
                    std::cout << ones[j] << " hundred " << ones[d%10] <<std::endl;
                    
                }
                if (e == 1 && j+10 == d%100){
                    std::cout << ones[f] << " hundred " << teens[j] <<std::endl;
                }
                if (e > 1 && j == d%10 ){
                    if (d%10 > 0){
                        std::cout << ones[f] << " hundred " << tens[e] <<" "<< ones[j] <<std::endl;
                    }
                    else {
                        std::cout << ones[f] << " hundred " << tens[e] <<std::endl;
                    }
                }
            }

        }
        number/=1000;
        i++;
        if (number%1000!=0){
            std::cout << orders[i] <<std::endl;
        }
    }
    
//std::cout << "nnnnnnnnnnn= "<< 6%1000 <<std::endl;

}