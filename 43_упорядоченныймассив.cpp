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
   

    std::vector <std::vector <int> > arr;

    for (int i = 0; i < teams; i++){
        std::vector <int> row;
        for (int j = 0; j < games; j++){
            row.push_back(rand()%(10-1+1)+1);
            //row1=row;
        }
        arr.push_back(row);
        arr1.push_back(row);
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
    
    long buf_mus;int **a,i, j, nrow, ncol, b, buf_a;
    double *mus = new double [teams];
         for (int i = 0;i < teams;i++)
        { mus[i] = 0;
          for (int j = 0;j < games; j++)
         mus[i] += arr[i][j];
         }
    for(int i = 0;i < teams-1; i++)
           {if (sum[i]==1)
                {b = i;
             for(int j = i+1;j < teams; j++)
                 if (mus[j] > mus[b])
                     b = j;
                     buf_mus = mus[i];
                     mus[i] = mus[b];
                     mus[b] = buf_mus;
                      for(int j = 0;j < games;j++)
                         { buf_a = arr[i][j];
                            arr[i][j] = arr[b][j];
                            arr[b][j] = buf_a;
                         }
                }
            }
        
    
    
    std::cout<<"new :"<<std::endl;
    for (int i = 0; i < teams; i++){
        int sum = 0;
        for (int j = 0; j < games; j++){
            sum += arr[i][j];
            std::cout << arr[i][j] << " " << std::flush;
            
        }
        std::cout << "| Total points: " << sum << std::flush;
        std::cout<<std::endl;
    }
}