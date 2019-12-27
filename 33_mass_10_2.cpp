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
        arr[i]=rand()%(100-10+1)+10;
  
    }
    for (int j = 0; j < arr.size(); j++){
        std::cout << j << ". " << arr[j] << std::endl;
    }


    int a=0;
    for (int k = 0; k < arr.size(); k++){
    while (arr[k]!=0){

        a=arr[k]%2;
        arr[k]/=2;
        std::cout << "a= " << a;
        std::cout << "arr[k]= " << arr[k];
    }
        
         
    }
        
 
}