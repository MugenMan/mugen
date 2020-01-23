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
        arr[i]=rand()%(100-1+1)+1;
  
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
            
            }
            
            
            b=arr[k];
            arr[k] = arr[a];
            arr[a] = b;

    }
    std::cout << std::endl;
    for (int j = 0; j < arr.size(); j++){
        std::cout << j << ". " << arr[j] << std::endl;
    }

    std::cout << "Enter number n: " << std::endl;
    std::cin >> n; 

    int start=0, finish=N-1, f;
  
    while (finish-start >= 0){
        //while (finish>=1){
        f= (start+finish)/2;
        if (arr[f] == n){
            break;
        }
        else if (arr[f]<n){
            start= f+1;
        }
        else {
            finish= f-1;
            
        }
        // std::cout<< "finish=" << finish <<std::endl;
        // std::cout<< "start=" << start <<std::endl;
        // std::cout<< "N=" << N <<std::endl;
    }
    if (arr[f] == n){
        std::cout << "index= " << f <<std::endl;
        }
    else {
        std::cout<< "not found" <<std::endl;
        }
        
     
    
}