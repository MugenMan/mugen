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
        arr[i]=rand()%(10-1+1)+1;
  
    }
    for (int j = 0; j < arr.size(); j++){
        std::cout << j << ". " << arr[j] << std::endl;
    }

    int a, b;
    for (int k = 1; k < arr.size(); k++){
        a=arr[k];
        while (arr[k-1]>a){
            arr[k]=arr[k-1];
            arr[k-1]=a;
        }

            //std::cout << "arrk=" << arr[k] <<std::endl;
            //std::cout << "arrc=" << arr[a] <<std::endl;
        //     for (int j = 0; j < arr.size(); j++){
        // std::cout << j << ". " << arr[j] << std::endl;
        //}
    }
        
    

    
    std::cout << std::endl;
    for (int j = 0; j < arr.size(); j++){
        std::cout << j << ". " << arr[j] << std::endl;
    }
}