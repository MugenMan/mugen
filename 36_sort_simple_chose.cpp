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

    int a=arr[0], b=0,c=0;
    for (int k = 0; k < arr.size()-1; k++){
        for (int s = 0; s < arr.size()-1; s++){
            if (arr[s] < arr[c]){
                c = s;
            }
               
            }
             b = arr[k];
             std::cout << "a=" << c <<std::endl;
             
             arr[k] = arr[c];
             arr[c] = b;
             
        }
        
    

    
    std::cout << std::endl;
    for (int j = 0; j < arr.size(); j++){
        std::cout << j << ". " << arr[j] << std::endl;
    }
}