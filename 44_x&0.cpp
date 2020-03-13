#include <iostream>
#include <string>
#include <vector>

int main(){
    char x, y;
    std::vector <std::vector <char> > arr;

     for (int i = 0; i < 3; i++){
        std::vector <char> row;//вспомог
        for (int j = 0; j < 3; j++){
            row.push_back('0');
        }
        arr.push_back(row);
    }
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            std::cout<<"+"<<std::flush;
            if (j < 3){
                std::cout<<"-"<<std::flush;
            }
        }
        std::cout<<std::endl;
        for (int j = 0; j < 4; j++)
        {
            if (i == 3)
            {
                break;
            } 
            std::cout<<"|"<<std::flush;
            //std::cout<<"o"<<std::flush;
            if (j < 3)
            {
                std::cout<<"o"<<std::flush;
            }
            
        }
        
        std::cout<<std::endl;
    }

    // while (arr[0][0] != "0"){
    //     std::cout <<"Turn: "<< std::endl;
    //     std::cout <<"Enter cell number:"<< std::endl;
    //     std::cout <<"x: "<< std::flush;
    //     std::cin >> x;
    //     std::cout <<"y: "<< std::flush;
    //     std::cin >> y;
    // }
    
}