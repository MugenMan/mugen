#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <map>

int x, y, index = 0, score, score_win;
std::string player_one, player_two, name, name_winner;
std::vector <std::vector <char> > arr;
//std::vector <std::vector <char> > new_arr;
bool x0, ch = false, bool_name = false, win_x, win_0, draw = false;//xor0

std::ofstream ofs;
std::ifstream ifs;
std::map<std::string, int> associative_arr;


void massiv()
    {
        for (int i = 0; i < 4; i++)
        {
            std::vector <char> row;
         
            for (int j = 0; j < 4; j++)
            {
                row.push_back(' ');
           
                std::cout<<"+"<<std::flush;
                if (j < 3){
                    std::cout<<"-"<<std::flush;
                }
            }
            arr.push_back(row);
            //new_arr.push_back(row);
            std::cout<<std::endl;
            for (int j = 0; j < 4; j++)
            {
                if (i == 3)
                {
                    break;
                } 
                std::cout<<"|"<<std::flush;
                if (j < 3)
                {
                    std::cout<<arr[i][j]<<std::flush;
                }
                
            }
            
            std::cout<<std::endl;
        }
    }


void check()
{  

    char x_or_0;
    if (x0)
    {
        x_or_0 ='0';
    }
    else
    {
       x_or_0 ='x'; 
    }
    
    for (int i = 0; i < 4; i++)
    {
        if ((arr[i][0] == x_or_0 && arr[i][1] == x_or_0 && arr[i][2] == x_or_0) ||
        (arr[0][i] == x_or_0 && arr[1][i] == x_or_0 && arr[2][i] == x_or_0))
        {   if (x0)
            {
                std::cout <<"win - 0: "<<player_two<< std::endl;
                win_0 = true;
            }
            else
            {
                std::cout <<"win - X: "<<player_one<< std::endl;
                win_x = true;
               
            }
        ch = true;
        
        }
    
    }
    if ((arr[0][2] == x_or_0 && arr[1][1] == x_or_0 && arr[2][0] == x_or_0) ||
    (arr[0][0] == x_or_0 && arr[1][1] == x_or_0 && arr[2][2] == x_or_0))
    {
      if (x0)
        {
            std::cout <<"win - 0: "<<player_two<< std::endl;
            win_0 = true;
        }
        else
        {
            std::cout <<"win - X: "<<player_one<< std::endl;
            win_x = true;
            
        }
       ch = true; 
       //score++; 
    }
    // if (index == 9 && !ch)//draw
    //     {
    //         index++;     
    //     }
    if (index == 9 && !ch){
        std::cout <<"Draw"<< std::endl;
        draw = true;
        ch = true;
    }
    
}
void txt()
{
    ifs.open("x_0.txt");
    //std::cout <<": "<<ifs.good()<< std::endl;
    if (ifs.good())
    {         
        while (!ifs.eof()) 
        {
            ifs >> name;
            if (name == name_winner)
            {
                ifs >> score;
                score_win = score;
                bool_name = true;
            }
            else{
                ifs >> score;
                associative_arr[name] = score;
            }
            
        }
        if (bool_name){
            associative_arr[name_winner] = score_win+1;
        }
        else{
            //associative_arr[name] = score;
            associative_arr[name_winner] = 1;
        }
        ifs.close();
    }
    else
    {
        associative_arr[name_winner] = 1;    
    }
        
    //ifs.close();
    ofs.open("x_0.txt");
    for (auto it = associative_arr.begin(); it != associative_arr.end(); it++)
    {
        ofs << it->first <<" "<< it->second <<std::endl;
    }
    ofs.close();
}

void vvod()
{   
    
    // if (index == 9){
    //        repeat=false; 
    //     }
    while (ch != true)
    {   
        bool repeat=true;
        
        while (repeat!=false)
        {     
            repeat=true;
            if (index != 9){
                if (x0)
                {
                    std::cout <<"Turn - X: "<<player_one<< std::endl;
                }
                else
                {
                    std::cout <<"Turn - 0: "<<player_two<< std::endl;
                }
                std::cout <<"Enter cell number:"<< std::endl;
                std::cout <<"x: "<< std::flush;
                std::cin >> x;
                std::cout <<"y: "<< std::flush;
                std::cin >> y;

                std::cout << std::endl;
                if (x < 4 && y < 4 && x != 0 && y != 0 && arr[x-1][y-1] != 'x' && arr[x-1][y-1] != '0')
                {   
                    repeat=false;
                    index++;
                }
                if (repeat)
                {
                    std::cout <<"\nError. Repeat enter cell number:"<< std::endl;
                }
            }
            //if (index == 9){repeat=false;}
            if (x0 == true && !repeat)
            {
                arr[x-1][y-1]='x';
                x0=false;
            }
            else if (x0 == false && !repeat)
            {
                arr[x-1][y-1]='0';
                x0=true;
            }
            
            massiv();
            
        }
    check();
    }
    if (ch){
        
        if (win_0)
        {
            name_winner = player_two;
            txt();
        }
        if (win_x)
        {
            name_winner = player_one;
            txt();
        }
        
    }
    
}

int main(){
    char x_0;
    bool flag = false;
    x0 = true;
    //std::cout <<"win - X: "<<ifs("x_0.txt").good<< std::endl;
    std::cout<<"Enter the name of the player - X: "<<std::flush;
    std::cin>>player_one;
    //player_one="oleg";
    std::cout << std::endl;
    std::cout<<"Enter the name of the player - 0: "<<std::flush;
    std::cin>>player_two;
    std::cout << std::endl;
    //name=player_one;
    std::cout<<name<<std::endl;
    massiv();
    vvod();
}

// в текст докум написано, к примеру, следующие:
// oleg 1
// denis 2
// dima 4

// запускаю программу, пишу имя1 - "jeka", имя2 - "misha"
// довожу игру до ничьи (11 13 12 21 22 32 23 33 31).

// в txt записывается так, как мне и нужно:
// oleg 1
// denis 2
// dima 4
// jeka 1
// misha 1
// ----------------------------------------------------
// но в другом случаи ничьи появляется ошибка
// в текст докум написано, к примеру, следующие:
// oleg 1
// denis 2
// dima 4

// запускаю программу, пишу имя1 - "sasha", имя2 - "oleg"
// довожу игру до ничьи (11 13 12 21 22 32 23 33 31).

// по идее, в текстовом документ должно быть напечатно:
// oleg 2
// denis 2
// dima 4
// sasha 1

// в моем же случае 1 игрок увеличивает счёт, а 2 игрок вовсе не появляется:
// oleg 2
// denis 2
// dima 4
// однако, если я присвою имена игрокам наооборот, а именно имя1 - "oleg", имя2 - "sasha", то
// выводится так, как мне и надо, те у олега - 2, а саша добавится со счетом 1