#include <iostream>
#include <vector>
#include <stdlib.h>
#include <time.h>


int main() {
int sum=0,N,a;
bool found=false;
    srand(time(NULL));
    std::cout << "Enter size arr: " << std::flush;
    std::cin >> N;

    std::vector <int> arr(N);

    for (int i = 0; i < arr.size(); i++){
        arr[i]=rand()%(10+5+1)-5;
        //sum+=arr[i];
    }
    for (int j = 0; j < arr.size(); j++){
        std::cout << j << ". " << arr[j] << std::endl;
    }

    std::cout << "Enter number: " << std::flush;
    std::cin >> a;
    for (int k = 0; k < arr.size(); k++){
        if (a==arr[k])
        {   found=true;
            std::cout << "index= " << k << std::endl;   
        }
    }
    if (!found){
            std::cout << "no" << std::endl;  
        }

}