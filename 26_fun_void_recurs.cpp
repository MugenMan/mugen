#include <iostream>
#include <string>
#include <math.h>
void reverse(int n){
    if(n == 0)
        return;
    else{
        std::cout << n % 10; 
        
        reverse(n/10); 
    }
}
// void reverse1(int n) {
//     int a=n;
    
   // if (n%10==2 || n/10==0 ){
     //   a=n%10;
   //     n/=10;
        //std::cout << a;
    //}//std::cout << std::endl;
    


	// while(n != 0){
    // a=n%10;
    // n/=10;
    



int main()
{
	int n;
	std::cout << "enter n" << std::endl;
	std::cin >> n;
	std::cout << std::endl;
	
	reverse(n);

    std::cout << std::endl;

	//std::cin.get(); std::cin.get();
	return 0;
}