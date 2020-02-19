#include <iostream>
#include <string>

int main(){
    int number, three, one, ten, hudred, order=0;
    std::string ones[]={"","one","two","three", "four", "five", "six", "seven", "eight", "nine"};
    std::string tens[]={"", "", "twenty", "thirty", "forty", "fivty", "sixty", "seventy", "eighty", "ninty"};
    std::string teens[]={"ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
    std::string orders[]={"", "thousand", "million", "billion"};
    std::string buffer;
    std::string result;
    

    std::cout << "Enter string: " << std::flush;
    std::cin>> number;

    if (number == 0){
        std::cout<< "zero" <<std::endl;
        
    }
    while (number !=0){
        
        three = number%1000;
        number = number / 1000;
        one = three % 10;
        ten = three % 100/10;
        hudred = three / 100;
        
        buffer = "";
        
        order++; //кол-во троек/текущая тройка

        if (ten == 1){
            buffer = teens[one];
        }
        else {
            buffer = tens[ten]+" "+ones[one];
        }


        std::cout << "one= " << one <<std::endl;
        std::cout << "ten= " << ten <<std::endl;
        std::cout << "number= " << number <<std::endl;
        std::cout << "hudred= " << hudred <<std::endl;
        std::cout << "buffer= " << buffer <<std::endl;

    if (hudred == 0){
        buffer = ones[hudred]+" " + buffer;
    }
    else {
        buffer = " "+ones[hudred] + " hundred " + buffer;
    }
       
        if (number != 0){
            
            buffer = ones[number] +" " + orders[order]+buffer;
            
                result = buffer +" "+orders[order] + result;
             
            
        }
        //a = ones[hundred] + " hundred " + a;
        
        
        std::cout << "order= " << order <<std::endl;
        std::cout << "buffer= " << buffer <<std::endl;
        std::cout << "result= " << result <<std::endl;
        //
        //r = buffer + orders[order]+r;
    }
}