#include <iostream>
#include <vector>
#include <stdlib.h>
#include <time.h>


int main() {
int sum=0,N;
bool found=false;
    srand(time(NULL));
    std::cout << "Enter size arr: " << std::flush;
    std::cin >> N;

    std::vector <int> arr(N);

    for (int i = 0; i < arr.size(); i++){
        arr[i]=rand()%(3+10+1)-10;
  
    }
    for (int j = 0; j < arr.size(); j++){
        std::cout << j << ". " << arr[j] << std::endl;
    }


    int a=0;
    for (int k = 0; k < arr.size(); k++){

        if (arr[k]>arr[a]){
           a=k;
        }
        
         
    }
        
    
    std::cout << "max " << arr[a] << " index: " << a << std::endl;
}