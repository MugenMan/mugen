#include <iostream>
#include <string>
#include <vector>
#include <time.h>

int main(){
    srand(time(NULL));
    int teams, games, bestpoints = 0, bestteams = 0, counter;

    // std::cout << "Enter the number of teams and games: " << std::flush;
    // std::cin>> teams >> games;
    std::cout << "Enter the number of teams: " << std::flush;
    std::cin >> teams;
    std::cout << "Enter the number of games: " << std::flush;
    std::cin >> games;
    std::cout << std::endl;

    std::vector <std::vector <int> > arr;//основной
    std::vector <std::vector <int> > new_arr;//вспомогательный
   
    for (int i = 0; i < teams; i++){
        std::vector <int> row;
        std::vector <int> row1;//вспомог
        for (int j = 0; j < games; j++){
            row.push_back(rand()%(10-1+1)+1);
            row1.push_back(0);
        }
        arr.push_back(row);
        new_arr.push_back(row1);
    }

    
    for (int i = 0; i < teams; i++){
        int sum = 0;
        std::cout << "Teams "<< i+1 << ": " << std::flush;
        for (int j = 0; j < games; j++){

            sum += arr[i][j];
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


    for (int i = 0; i < teams; i++){
        new_arr[i][0] = i;
        for (int j = 0; j < games; j++){
            new_arr[i][1]+= arr[i][j];
        }
    }
    std::cout<<std::endl;

    
    for (int i = 0; i < teams-1; i++){

        for (int k = i+1; k < teams; k++){
            if (new_arr[i][1] < new_arr[k][1]){
                
                for (int j = 0; j < games+1; j++){
                    counter = arr[k][j];
                    arr[k][j] = arr[i][j];
                    arr[i][j] = counter; 

                }
                
                counter = new_arr[i][1];
                new_arr[i][1] = new_arr[k][1];
                new_arr[k][1] = counter;
                
                counter = new_arr[i][0];
                new_arr[i][0] = new_arr[k][0];
                new_arr[k][0] = counter;
            }
        }
    }

    std::cout<<"ordered array"<<std::endl;

    for (int i = 0; i < teams; i++){
        int sum = 0;
        std::cout << "Teams "<< new_arr[i][0]+1 << ": " << std::flush;
        for (int j = 0; j < games; j++){
            //sum += arr[i][j];
            std::cout << arr[i][j] << " " << std::flush;
            //std::cout << items[j] << " " << std::flush;
            
        }
        std::cout << "| Total points: " << new_arr[i][1] << std::flush;
        std::cout<<std::endl;
    }
    std::cout<<std::endl;

    // for (int i = 0; i < teams; i++){
    //     int sum = 0;
    //     //std::cout << "Teams "<< items[i] << ": " << std::flush;
    //     for (int j = 0; j < games; j++){
    //         //sum += new_arr[i][j];
    //         std::cout << new_arr[i][j] << " " << std::flush;
    //         //std::cout << items[j] << " " << std::flush;
            
    //     }
    //     //std::cout << "| Total points: " << sum << std::flush;
    //     std::cout<<std::endl;
    // }
}