#include <iostream>
#include <string>
#include <vector>
#include <time.h>

int main(){
    srand(time(NULL));
    int teams, games, bestpoints = 0, bestteams = 0;

    // std::cout << "Enter the number of teams and games: " << std::flush;
    // std::cin>> teams >> games;
    std::cout << "Enter the number of teams: " << std::flush;
    std::cin >> teams;
    std::cout << "Enter the number of games: " << std::flush;
    std::cin >> games;
    std::cout << std::endl;

    std::vector <std::vector <int> > a;
   

    std::vector <std::vector <int> > arr;

    for (int i = 0; i < teams; i++){
        std::vector <int> row;
        for (int j = 0; j < games; j++){
            row.push_back(rand()%(10-1+1)+1);
            //row1=row;
        }
        arr.push_back(row);
        a.push_back(row);
       //std::cout << "arr= "<< row[i] << ": " << std::flush;
    }
    //std::cout << "arr= "<< row[0] << ": " << std::flush;
    
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

    std::vector <int> sum(teams);

    for (int i = 0; i < teams; i++){
        sum[i] = 0;
        for (int j = 0; j < games; j++){
            sum[i]+= arr[i][j];
        }
    }
    std::vector <int> items(teams);
    for (int i = 0; i < teams-1; i++){

        for (int k = i+1; k < teams; k++){
            if (sum[i] < sum[k]){
                
                //std::cout << " = "<< k+1 << " " << std::flush;
                    //std::cout<<std::endl;
                    //std::cout << " = "<< i << " " << std::flush;
                for (int j = 0; j < games; j++){
                    
                    int counter = arr[k][j];
                    arr[k][j] = arr[i][j];
                    arr[i][j] = counter;
                    items[j] = k;
                }
                std::cout << " = "<< k << " " << std::flush;
                
                int counter = sum[i];
                sum[i] = sum[k];
                sum[k] = counter;
            }
        }
    }

    std::cout<<std::endl;

    for (int i = 0; i < teams; i++){
        int sum = 0;
        std::cout << "Teams "<< items[i] << ": " << std::flush;
        for (int j = 0; j < games; j++){
            sum += arr[i][j];
            std::cout << arr[i][j] << " " << std::flush;
            //std::cout << items[j] << " " << std::flush;
            
        }
        std::cout << "| Total points: " << sum << std::flush;
        std::cout<<std::endl;
    }

}