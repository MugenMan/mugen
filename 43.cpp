#include <iostream>
#include <string>

int main(){
    int number, b, c = 0, d = 0, e = 0, f = 0, g = 0;
    std::string ones[]={"","one","two","three", "four", "five", "six", "seven", "eight", "nine"};
    std::string tens[]={"", "", "twenty", "thirty", "forty", "fivty", "sixty", "seventy", "eighty", "ninty"};
    std::string teens[]={"ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
    std::string orders[]={"", "thousand", "million", "billion", "trillion"};
    //std::string nu;

    std::cout << "Enter string: " << std::flush;
    //std::getline(std::cin, s); //вывод с пробелами

    std::cin>> number;
    //std::cout << "khhkjhjk= "<< number%10 <<std::endl;
    b = number;
    e = number%100/10;
    f = number/100;
    while (b != 0){
        b/=10;
        //std::cout<< "b= " << b <<std::endl;
        c++;
    }
    //std::cout<< "c= " << c <<std::endl;



    for (int i = 0; i < 10; i++){
        if (c == 0){
            std::cout << "zero" <<std::endl;
            break;
        }
        if (c == 1 && number != 0){
            if (i == number){
                std::cout << ones[i] <<std::endl;
            }
        }
        if (c == 2){
            if (i == 1 && i*10 == number){
                std::cout << teens[0] <<std::endl;
                break;
            }
            if (i*10 == number){
                std::cout << tens[i] <<std::endl;
            }
            if (i!=0 && 10+i == number){
                std::cout << teens[i] <<std::endl;
            }
            if (number/10 > 1 && number%10 == i && i!=0){
                
            std::cout << tens[number/10] << " " << ones[i] <<std::endl;
        }
        }

        if (c == 3 ){
            if (i*100 == number){
                std::cout << ones[i] << " hundred" <<std::endl;
                break;
            }
            if (e == 0 && i == f && i > 0){
                std::cout << ones[i] << " hundred " << ones[number%10] <<std::endl;
                
            }
            if (e == 1 && i+10 == number%100){
                std::cout << ones[f] << " hundred " << teens[i] <<std::endl;
            }
            if (e > 1 && i == number%10 ){
                if (number%10 > 0){
                    std::cout << ones[f] << " hundred " << tens[e] <<" "<< ones[i] <<std::endl;
                }
                else {
                    std::cout << ones[f] << " hundred " << tens[e] <<std::endl;
                }
            }
            //std::cout << ones[d] << "hundred" << ones[i] <<std::endl;
        }

        if (c >= 4){
            d = number;
            e = d%100/10;
            f = d/100;

            if (i*1000 == d){
                std::cout << ones[i] << " thousand" <<std::endl;
                break;
            }
            else {
            g = 3;
             while (g != 0){ //number=number/1000
             //number

                //for (i = 0; i < 3; i++)
                d = number%1000;
                e = d%100/10;
                f = d/100;

            
            if (i == d){
                std::cout << ones[i] <<std::endl;
            }
        
        
            if (i == 1 && i*10 == d){
                std::cout << teens[0] <<std::endl;
                break;
            }
            if (i*10 == d){
                std::cout << tens[i] <<std::endl;
            }
            if (i!=0 && 10+i == d){
                std::cout << teens[i] <<std::endl;
            }
            if (d/10 > 1 && d%10 == i && i!=0){
                
            std::cout << tens[d/10] << " " << ones[i] <<std::endl;
        }
            if (i*100 == d){
                std::cout << ones[i] << " hundred" <<std::endl;
                break;
            }
            if (e == 0 && i == f && i > 0){
                std::cout << ones[i] << " hundred " << ones[d%10] <<std::endl;
                
            }
            if (e == 1 && i+10 == d%100){
                std::cout << ones[f] << " hundred " << teens[i] <<std::endl;
            }
            if (e > 1 && i == d%10 ){
                if (d%10 > 0){
                    std::cout << ones[f] << " hundred " << tens[e] <<" "<< ones[i] <<std::endl;
                }
                else {
                    std::cout << ones[f] << " hundred " << tens[e] <<std::endl;
                }
            }
            g--;
             }
            // if (e == 0 && i == f && i > 0){
            //     std::cout << ones[i] << " hundred " << ones[d%10] <<std::endl;
            // }
            // if (e == 1 && i+10 == d%100){
            //     std::cout << ones[f] << " hundred " << teens[i] <<std::endl;
            // }
            // if (e > 1 && i == d%10 ){
            //     if (d%10 > 0){
            //         std::cout << ones[f] << " hundred " << tens[e] <<" "<< ones[i] <<std::endl;
            //     }
            //     else {
            //         std::cout << ones[f] << " hundred " << tens[e] <<std::endl;
            //     }
            // }
            }
        }
        
    }
//std::cout << "nnnnnnnnnnn= "<< number/1000 <<std::endl;

}