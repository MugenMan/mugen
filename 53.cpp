#include <iostream>
#include <string>
#include <fstream>

int main(){
    std::ifstream f("filename1.txt");
    while (!f.eof()){
    

    

    int number, three, one, ten, hudred, order=0;
    std::string ones[]={"","one","two","three", "four", "five", "six", "seven", "eight", "nine"};
    std::string tens[]={"", "", "twenty", "thirty", "forty", "fivty", "sixty", "seventy", "eighty", "ninty"};
    std::string teens[]={"ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
    std::string orders[]={"", "thousand", "million", "billion", "dddddd"};
    std::string buffer;
    std::string result="";
    bool a=false;


    f >> number;


    //std::cout << "Enter string: " << std::flush;
    
    //std::cin>> number;

    if (number == 0)
    {
        std::cout<< "zero" <<std::endl;
        
    }
        
    if (number < 0)
    {
        number*=-1;
        a=true;
    }
    while (number !=0){
        
        three = number%1000;
        number = number / 1000;
        one = three % 10;
        ten = three % 100/10;
        hudred = three / 100;
        // std::cout << "three= " << three <<std::endl;
        // std::cout << "number= " << number <<std::endl;
        // std::cout << "one= " << one <<std::endl;
        // std::cout << "ten= " << ten <<std::endl;
        // std::cout << "hudred= " << hudred <<std::endl;
        
        buffer = "";
        
         //кол-во троек/текущая тройка
        //std::cout << "buffer1= " << buffer <<std::endl;
        //std::cout << "ten=" << ten <<"="<<std::endl;
        if (ten == 1){
            buffer = teens[one];
        }
        else {
            if (ten == 0){
                buffer = ones[one]; 
            }
            else {
                buffer = tens[ten]+" "+ones[one];
            }
            
        }

        //std::cout << "buffer=" << buffer <<"="<<std::endl;

        if (hudred !=0) {
            if (buffer==""){
                buffer = ones[hudred] + " hundred" + buffer;
            }
            else{
                buffer = ones[hudred] + " hundred " + buffer;
            }
            
        }

    //std::cout << "buffer=" << buffer <<"="<<std::endl; 
    //std::cout << "result=" << result <<"="<<std::endl;  
        if (number != 0){
            if (buffer==""){
                result=buffer+orders[order]+" "+result;
            }
            else {
                result=buffer+" "+orders[order]+" "+result;
            }
            
        }

        if (number==0) {
            result=buffer+" "+orders[order]+" "+result;
        }
        //std::cout << "result=" << result <<"="<<std::endl; 
        order++;
        //std::cout << "buffer= " << buffer <<std::endl;
        
        //
        //r = buffer + orders[order]+r;
    }
    if (a){
        std::cout << "result= minus " << result <<std::endl;
    }
    else{
        std::cout << "result= " << result <<std::endl;
    }
    }
    f.close();
}