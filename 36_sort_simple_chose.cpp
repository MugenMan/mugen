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
    for (int k = 0; k < arr.size()-1; k++){
        a=k;
        for (int s = k; s < arr.size(); s++){
            if (arr[s] < arr[a]){
                a = s;
            }
            //std::cout << "arrs=" << arr[s] <<std::endl;
            }
            //std::cout << "arrA=" << arr[a] <<std::endl;
            
            b=arr[k];
            arr[k] = arr[a];
            arr[a] = b;

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