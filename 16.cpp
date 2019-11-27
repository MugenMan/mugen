#include <iostream>
#include <string>
#include <math.h>

int main()
{
int n, d,r=0,l=0;
    do {
        d = 0;
        std::cout << "enter number: ";
        std::cin >> n;
        int k = n;
        for(int i = 0; k != 0; i++)
        {
            k = k / 10; 
            d++;
        }
        if(d != 6)
            std::cout << "Number not 6 repeat enter" <<std::endl;
    } 
    while(d != 6);

    for (int i = 0; i < 6; i++){
        if (i < 3){
            r += n % 10;
            n /= 10;
    } else {
        l += n % 10;
        n /= 10;
        }
 } 

 if (r==l){
     std::cout << "lucky ticket" << std::endl;
     } else {
     std::cout << "unlucky ticket" << std::endl;
     }
   
    std::cout << "sum of right = " << r << std::endl;
    std::cout << "sum of left = " << l << std::endl;
        
        
        return 0;
}