#include <iostream>
#include <string>
#include <vector>
#include <fstream>

int x, y, index = 0, score = 1, s;
std::string player_one, player_two, name, old_name;
std::vector <std::vector <char> > arr;
std::vector <std::vector <char> > new_arr;
bool x0, ch = false;//xor0
std::ofstream f("x_0.txt");
std::ifstream n("x_0.txt");

void massiv()
    {
        for (int i = 0; i < 4; i++)
        {
            std::vector <char> row;
            //std::vector <char> new_row;
            for (int j = 0; j < 4; j++)
            {
                row.push_back(' ');
                //new_row.push_back(0);
                std::cout<<"+"<<std::flush;
                if (j < 3){
                    std::cout<<"-"<<std::flush;
                }
            }
            arr.push_back(row);
            new_arr.push_back(row);
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
    //while (!f.eof()) {
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
                name=player_two;
                std::cout <<"win - 0: "<<player_two<< std::endl;
                while (!n.eof()) {
                n >> old_name;
                if (old_name == name){
                    score++;
                }
                
                }
                n.close();
                f << player_two <<" "<< score <<std::endl;
            }
            else
            {
                name=player_one;
                std::cout <<"win - X: "<<player_one<< std::endl;
                while (!n.eof()) {
                n >> old_name;
                if (old_name == name){
                    score++;
                }
                }n.close();
                f << player_one <<" "<< score <<std::endl;
            }
        ch = true;
        score++;
        }
    
    }
    if ((arr[0][2] == x_or_0 && arr[1][1] == x_or_0 && arr[2][0] == x_or_0) ||
    (arr[0][0] == x_or_0 && arr[1][1] == x_or_0 && arr[2][2] == x_or_0))
    {
      if (x0)
        {
            name=player_two;
            std::cout <<"win - 0: "<<player_two<< std::endl;
            while (!n.eof()) {
                n >> old_name;
                if (old_name == name){
                    score++;
                }
                }n.close();
            f << player_two <<" "<< score <<std::endl;
        }
        else
        {
            name=player_one;
            std::cout <<"win - X: "<<player_one<< std::endl;
            while (!n.eof()) {
                n >> old_name;
                if (old_name == name){
                    n >> s;
                    score = s+1;
                    std::cout <<"test"<< std::endl;
                }
                }n.close();
            f << player_one <<" "<< score <<std::endl;
        }
       ch = true; 
       score++; 
    }
    // if (index == 9 && !ch)//draw
    //     {
    //         index++;     
    //     }
    if (index == 9 && !ch){
        std::cout <<"Draw"<< std::endl;
        ch = true;
    }
    
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
    
    
}

int main(){
    char x_0;
    bool flag = false;
    x0 = true;
    
    std::cout<<"Enter the name of the player - X: "<<std::flush;
    std::cin>>player_one;
    std::cout << std::endl;
    std::cout<<"Enter the name of the player - 0: "<<std::flush;
    std::cin>>player_two;
    std::cout << std::endl;
    //name=player_one;
    std::cout<<name<<std::endl;
    massiv();
    vvod();
}