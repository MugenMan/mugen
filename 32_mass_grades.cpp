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


// for (int i = 0; i < arr.size(); i++){
//     std::cin >> arr[i];
// }
// for (int j = 0; j < arr.size(); j++){
// std::cout << j << ". " << arr[j] << std::endl;
// }





    for (int i = 0; i < arr.size(); i++){
        arr[i]=rand()%(5-2+1)+2;
  
    }
    for (int j = 0; j < arr.size(); j++){
        std::cout << j << ". " << arr[j] << std::endl;
    }


    bool a=true, b=true;
    for (int k = 0; k < arr.size(); k++){
    //     if (arr[k]==5){
    //         a=true;
    //     }
    //     else if (arr[k]!=5){
    //         b=false;
    //     }
 

    //    if (arr[k]==2){
    //         c=false;
    //     }
    //    if (arr[k]!=2){
    //         d=false;
    //     }
        if (arr[k]==5){
            a=false;
        }
        else if (arr[k]==2){
            b=false;
        }
        else if (arr[k]>3){
            a=true;
        }
         //std::cout << "b " << b << std::endl;
    }
        if (!a){
            std::cout << "5" << std::endl;
        } 
        if (!b || (!b && a)){
            std::cout << "2" << std::endl;
        }
        if  (b && a){
            std::cout << "3" << std::endl;
        }
}