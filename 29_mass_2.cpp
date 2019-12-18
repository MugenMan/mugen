#include <iostream>
#include <vector>

int main() {

int sum=0,N;

std::cout << "Enter size arr: " << std::flush;

std::cin >> N;
std::vector <int> arr(N);

//arr.size(N);

std::cout << "Enter number: " << std::flush;

for (int i = 0; i < arr.size(); i++){
    std::cin >> arr[i];
    sum+=arr[i];
}
for (int j = 0; j < arr.size(); j++){
std::cout << j << ". " << arr[j] << std::endl;
}

std::cout << "sum = " << sum << std::endl;

}