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

    int a;
    for (int k = 0; k < arr.size()-1; k++){
        for (int s = 0; s < arr.size()-1; s++){
            if (arr[s] > arr[s+1]){
                a = arr[s];
                arr[s] = arr[s+1];
                arr[s+1] = a;
            }
        }
       
        // for (int s=0; s < arr.size(); s++){
        //     //if (arr[k] > arr[b]){
        //         arr[k]=b;
        //         arr[k+1]=a;
            
        // }
    }
    std::cout << std::endl;
    for (int j = 0; j < arr.size(); j++){
        std::cout << j << ". " << arr[j] << std::endl;
    }
}