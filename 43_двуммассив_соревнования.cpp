#include <iostream>
#include <string>
#include <vector>
#include <time.h>

int main(){
    srand(time(NULL));
    int teams, games;

    std::cout << "Enter the number of teams and games: " << std::endl;
    std::cin>> teams >> games;

    //std::vector <std::vector <int> > arr(teams, std::vector <int> (games,0));
    std::vector <int> row;
    std::vector <std::vector <int> > arr;
    
    //arr.push_back(row);
    // row.push_back(5);
    // arr.push_back(row);
    //arr.size = teams;
    //std::vector <int> arr(N);

    

    // std::cout << "teams= " << teams <<std::endl;
    // std::cout << "games= " << games <<std::endl;

    for (int i = 0; i < teams; i++){
        for (int j = 0; j < games; j++){
            
            arr[i][j] = rand()%(10-1+1)+1;
            // row.push_back(rand()%(10-1+1)+1);
            // arr.push_back(row);
        }
    }
    
    for (int i = 0; i < teams; i++){
        for (int j = 0; j < games; j++){
            std::cout << "i= " << i << " "<< arr[i][j] << std::endl;
        }
    }
}