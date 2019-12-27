#include <iostream>
#include <vector>
#include <stdlib.h>
#include <time.h>


int main() {
int N;

   std::vector <int> arr;
   //arr.size();
    std::cout << "Enter: " << std::flush;
    std::cin >> N;

    
    while (N!=0){
        
        arr.push_back(N%2);
        N/=2;

        
        //std::cout << std::endl;
        //std::cout << N;
    }   
    for (int j=arr.size()-1; j>=0; j--){
        std::cout << arr[j];
    }
    
std::cout << std::endl;
  
}