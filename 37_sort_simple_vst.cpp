#include <iostream>
#include <vector>
#include <stdlib.h>
#include <time.h>


int main() {
int N;
bool found=false;
    srand(time(NULL));
    std::cout << "Enter size arr: " << std::flush;
    std::cin >> N;

    std::vector <int> arr(N);


    for (int i = 0; i < arr.size(); i++){
        arr[i]=rand()%(10+10+1)-10;
  
    }
    for (int j = 0; j < arr.size(); j++){
        std::cout << j << ". " << arr[j] << std::endl;
    }

    int a, b;
    for (int k = 1; k < arr.size(); k++){
        a = arr[k];
        b = k-1;
        while ((arr[b] > a) && (b >= 0)){
            arr[b+1] = arr[b];
            arr[b] = a;
            b--;
        }



            std::cout << "a=" << a <<std::endl;
            std::cout << "arrb=" << arr[b] <<std::endl;
            std::cout << "arrb+1=" << arr[b+1] <<std::endl;
            std::cout << "b=" << b <<std::endl;
        //     for (int j = 0; j < arr.size(); j++){
        // std::cout << j << ". " << arr[j] << std::endl;
        //}
    }
        
    

    
    std::cout << std::endl;
    for (int j = 0; j < arr.size(); j++){
        std::cout << j << ". " << arr[j] << std::endl;
    }
}