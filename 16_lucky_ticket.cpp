#include <iostream>
#include <string>
#include <math.h>

int main()
{
	int n,r=0,l=0;
    std::cout << "enter number n: " << std::endl;
	std::cin >> n;

    for (int i = 0; i < 6; i++){
        if (i < 3){
            r += n % 10;
            n /= 10;
    } else {
        l += n % 10;
        n /= 10;
        }
    } 

    std::cout << "sum of right = " << r << std::endl;
    std::cout << "sum of left = " << l << std::endl;

    if (r == l){
        std::cout << "lucky ticket" << std::endl;
     } else {
        std::cout << "unlucky ticket" << std::endl;
     }
   
        return 0;
}