#include <iostream>
#include <string>
#include <vector>
#include <time.h>

int main(){
    srand(time(NULL));
    int teams, games, bestpoints = 0, bestteams = 0, itemsi, itemsj;

    // std::cout << "Enter the number of teams and games: " << std::flush;
    // std::cin>> teams >> games;
    std::cout << "Enter the number of teams: " << std::flush;
    std::cin >> teams;
    std::cout << "Enter the number of games: " << std::flush;
    std::cin >> games;
    std::cout << std::endl;

    std::vector <std::vector <int> > arr1;
    std::vector <int> row1;

    std::vector <std::vector <int> > arr;

    for (int i = 0; i < teams; i++){
        std::vector <int> row;
        for (int j = 0; j < games; j++){
            row.push_back(rand()%(10-1+1)+1);
        }
        for (int i = 0; i < teams; i++){
            std::cout << i<< "= " << row[i] <<" "<<std::endl;
        }
        arr.push_back(row);
        arr1.push_back(row);
    }
    

    





    for (int i = 0; i < teams; i++){
        int sum = 0;
        std::cout << "Teams "<< i+1 << ": " << std::flush;
        for (int j = 0; j < games; j++){
            sum += arr[i][j];
            //itemsi = i;
            //row1.push_back(i);
            std::cout << arr[i][j] << " " << std::flush;
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
         std::cout<<std::endl;
    }
    std::cout<<std::endl;
    std::cout <<"Winner team: "<< bestteams + 1 << " | Total points: " << bestpoints << std::endl;
    
    
    int a, b;
    for (int i = 0; i < teams; i++){
        int sum = 0;
        std::cout << "Teams "<< i+1 << ": " << std::flush;
        for (int j = 0; j < games; j++){
            sum += arr1[i][j];
            //itemsi = i;
            //row1.push_back(i);
            a = arr1[i][j];
            b = i-1;
            while ((arr1[b][j] > a) && (b >= 0)){
                arr1[b+1][j] = arr1[b][j];
                arr1[b][j] = a;
                b--;
            }
        
            std::cout << arr1[i][j] << " " << std::flush;
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
         std::cout<<std::endl;
    }
    

}