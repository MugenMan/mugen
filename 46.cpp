#include <iostream>
#include <string>
#include <vector>

int x, y, index = 0;
std::vector <std::vector <char> > arr;
std::vector <std::vector <char> > new_arr;
bool x0, ch = false;//xor0

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
                std::cout <<"win: 0"<< std::endl;
            }
            else
            {
                std::cout <<"win: X"<< std::endl;
            }
        ch = true;
        }
    
    }
    if ((arr[0][2] == x_or_0 && arr[1][1] == x_or_0 && arr[2][0] == x_or_0) ||
    (arr[0][0] == x_or_0 && arr[1][1] == x_or_0 && arr[2][2] == x_or_0))
    {
      if (x0)
        {
            std::cout <<"win: 0"<< std::endl;
        }
        else
        {
            std::cout <<"win: X"<< std::endl;
        }
       ch = true;  
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
                    std::cout <<"Turn: X"<< std::endl;
                }
                else
                {
                    std::cout <<"Turn: 0"<< std::endl;
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
    massiv();
    vvod();
}