#include <iostream>
#include <string>

int main(){
    int number, b, c = 0, d = 0, e = 0, f = 0, g = 0;
    std::string ones[]={"","one","two","three", "four", "five", "six", "seven", "eight", "nine"};
    std::string tens[]={"", "", "twenty", "thirty", "forty", "fivty", "sixty", "seventy", "eighty", "ninty"};
    std::string teens[]={"ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
    std::string orders[]={"", "thousand", "million", "billion", "trillion"};

    std::cout << "Enter string: " << std::flush;

    std::cin>> number;
    b = number;
    e = number%100/10;
    f = number/100;
    while (b != 0){
        b/=10;
        g++;
    }

            while (number != 0){
                d = number%1000;
                b=d;
                c=0;
                while (b != 0){
                    b/=10;
                    c++;
                }

                std::cout << "c=" << c <<std::endl;
                
                e = d%100/10;
                f = d/100;

            for (int j=0; j<10; j++){ 

            if (j*1000 == d){
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
                std::cout << tens[j] << " " << ones[j] <<std::endl;
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
        if (number!=0){
        std::cout << "orders[j]" <<std::endl;}
        
        }


//std::cout << "nnnnnnnnnnn= "<< 567/10 <<std::endl;

}