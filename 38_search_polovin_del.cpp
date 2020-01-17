#include <iostream>
#include <vector>
#include <stdlib.h>
#include <time.h>


int main() {
int N, n;
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

    std::cout << "Enter number n: " << std::flush;
    std::cin >> n; 

    int r = N/2, z;
    
    for (int k = 0; k < N/2; k++){
        if (n == arr[r]){
            z = arr[r];
        }
        if (n > arr[r]){
            z = arr[r+((N-r)/2)];

        }
        if (n < arr[r]){
            z = arr[r-((N-r)/2)];
        }
        
    }
        std::cout << "arrr=" << arr[r] <<std::endl;
        std::cout << "r=" << r <<std::endl;
        std::cout << "z=" << z <<std::endl;

    std::cout << std::endl;
    
}