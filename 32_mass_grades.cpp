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
        arr[i]=rand()%(5-2+1)+2;
  
    }
    for (int j = 0; j < arr.size(); j++){
        std::cout << j << ". " << arr[j] << std::endl;
    }


    bool a=true, b=true;
    for (int k = 0; k < arr.size(); k++){
    

        if (arr[k]!=5){
            a=false;
        }
        if (arr[k]==2){
            b=false;
        }

         //std::cout << "b " << b << std::endl;
    }
        if (a){
            std::cout << "otl" << std::endl;
        } 
        else if (!b){
            std::cout << "2" << std::endl;
        }
        else if  (b){
            std::cout << "sredn" << std::endl;
        }
}