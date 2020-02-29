#include <iostream>
#include <string>
#include <vector>
#include <time.h>

int main(){
    srand(time(NULL));
    int teams, games, sum = 0, bestpoints = 0, bestteams = 0;

    // std::cout << "Enter the number of teams and games: " << std::flush;
    // std::cin>> teams >> games;
    std::cout << "Enter the number of teams: " << std::flush;
    std::cin >> teams;
    std::cout << "Enter the number of games: " << std::flush;
    std::cin >> games;
    std::cout << std::endl;

    std::vector <std::vector <int> > arr(teams, std::vector <int> (games));
    std::vector <int> row;

    //std::vector <std::vector <int> > arr;
    //arr.push_back(row);
    // row.push_back(5);
    // arr.push_back(row);
    //arr.size = teams;
    //std::vector <int> arr(N);
    // std::cout << "teams= " << teams <<std::endl;
    // std::cout << "games= " << games <<std::endl;

    for (int i = 0; i < teams; i++){
        std::cout << "Teams "<< i+1 << ": " << std::flush;

        for (int j = 0; j < games; j++){
            arr[i][j] = rand()%(10-1+1)+1;
            sum += arr[i][j];

            std::cout << arr[i][j] << " " << std::flush;
            // row.push_back(rand()%(10-1+1)+1);
            // arr.push_back(row);
        }
        std::cout << "| Total points: " << sum << std::flush;

        if (bestpoints < sum){
            bestpoints = sum;
            bestteams = i;
        }
        if (bestpoints == sum){
            if (bestteams > i){
                bestteams = i;
            }
        }
        
        sum = 0;
        std::cout<<std::endl;
        
        //std::cout<<best<<std::endl;
    }
    std::cout<<std::endl;
    std::cout <<"Winner team: "<< bestteams + 1 << " | Total points: " << bestpoints << std::endl;
    

}