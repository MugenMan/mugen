#include <iostream>
#include <vector>
#define N 5

int main() {

int arr [N], sum=0;


std::cout << "Enter number: " << std::flush;

for (int i = 0; i < N; i++){
    std::cin >> arr[i];
    
    sum+=arr[i];
}
for (int j = 0; j < N; j++){
std::cout << j << ". " << arr[j] << std::endl;
}

std::cout << "sum = " << sum << std::endl;

}