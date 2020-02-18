#include <iostream>
#include <string>
#include <stdlib.h>

int main(){
    int number, b, c = 0, c1=0, d = 0, e = 0, f = 0, i=0;
    std::string ones[]={"","one","two","three", "four", "five", "six", "seven", "eight", "nine"};
    std::string tens[]={"", "", "twenty", "thirty", "forty", "fivty", "sixty", "seventy", "eighty", "ninty"};
    std::string teens[]={"ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
    std::string orders[]={"", "thousand", "million", "billion"};
    std::string a;
    std::string a2;
    std::string a3;
    std::cout << "Enter string: " << std::flush;
    std::cin>> number;

    b=number;
    while (b != 0){
            b/=10;
            c1++;
        }
    // three = number%1000;
    // number = number / 1000;
    // one = three % 10;
    // ten = three % 100/10;
    // hundred = three / 100;
    // buffer = " ";

    // if (ten == 1){
    //     buffer = teens[one];
    // }
    // else {
    //     buffer = tens[ten]+" " + ones[one];
    // }

    // buffer = ones[hundred] + " hundred " + buffer;
    // result = buffer + orders[order]+result;

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

        

        for (int j = 0; j < 10; j++){ 
            if (c == 1){
                if (j == d){
                    std::cout << ones[j] <<std::endl;
                    a = ones[j]+a;
                }
            }

            if (c == 2){
                if (j == 1 && j*10 == d){
                    std::cout << teens[0] <<std::endl;
                    a = teens[0]+a;
                    break;
                }
                
                if (j*10 == d){
                    std::cout << tens[j] <<std::endl;
                    a = tens[j]+a;
                }
                if (j!=0 && 10+j == d){
                    std::cout << teens[j] <<std::endl;
                    a = teens[j]+a;
                }
                if (d/10 > 1 && d%10 == j && j!=0){
                    std::cout << tens[d/10] << " " << ones[j] <<std::endl;
                    a = tens[d/10] + " " + ones[j]+a;
                }
            }

            if (c == 3 ){
                if (j*100 == d){
                    std::cout << ones[j] << " hundred" <<std::endl;
                    a = ones[j] + " hundred "+a;
                    break;
                }
                if (e == 0 && j == f && j > 0){
                    std::cout << ones[j] << " hundred " << ones[d%10] <<std::endl;
                    a = ones[j] + " hundred " + ones[d%10]+a;
                    
                }
                if (e == 1 && j+10 == d%100){
                    std::cout << ones[f] << " hundred " << teens[j] <<std::endl;
                    a = ones[f] + " hundred " + teens[j]+a;
                }
                if (e > 1 && j == d%10 ){
                    if (d%10 > 0){
                        std::cout << ones[f] << " hundred " << tens[e] <<" "<< ones[j] <<std::endl;
                        a = ones[f] + " hundred " + tens[e] + " " + ones[j]+a;
                    }
                    else {
                        std::cout << ones[f] << " hundred " << tens[e] <<std::endl;
                        a = ones[f] + " hundred " + tens[e]+a;
                    }
                }
            }

        }
        number/=1000;
        i++;
        if (number%1000!=0){
            std::cout << orders[i] <<std::endl;
            a = " "+orders[i]+" "+a;
        }
    }
    
    std::cout << "a= "<< a <<std::endl;

//std::cout << "nnnnnnnnnnn= "<< 6%1000 <<std::endl;
}