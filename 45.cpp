#include <iostream>
#include <string>
#include <vector>

int x, y, index = 0;
std::vector <std::vector <char> > arr;
std::vector <std::vector <char> > new_arr;
bool x0, ch = false;

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
{   //ch=false;
    char x_or_0;
    if (x0)
    {
        x_or_0 ='0';
    }
    else
    {
       x_or_0 ='x'; 
    }
    
    if ((arr[0][0] == x_or_0 && arr[0][1] == x_or_0 && arr[0][2] == x_or_0 ) || 
    (arr[1][0] == x_or_0 && arr[1][1] == x_or_0 && arr[1][2] == x_or_0 ) ||
    (arr[2][0] == x_or_0 && arr[2][1] == x_or_0 && arr[2][2] == x_or_0 ) ||
    (arr[0][0] == x_or_0 && arr[1][0] == x_or_0 && arr[2][0] == x_or_0 ) ||
    (arr[0][1] == x_or_0 && arr[1][1] == x_or_0 && arr[2][1] == x_or_0 ) ||
    (arr[0][2] == x_or_0 && arr[1][2] == x_or_0 && arr[2][2] == x_or_0 ) ||
    (arr[0][2] == x_or_0 && arr[1][1] == x_or_0 && arr[0][2] == x_or_0 ) ||
    (arr[0][0] == x_or_0 && arr[1][1] == x_or_0 && arr[2][2] == x_or_0 )
    )
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
    // if ((arr[0][0] && arr[0][1] && arr[0][2] == '0') || 
    // (arr[1][0] && arr[1][1] && arr[1][2] == '0') ||
    // (arr[2][0] && arr[2][1] && arr[2][2] == '0') ||
    // (arr[0][0] && arr[1][0] && arr[2][0] == '0') ||
    // (arr[0][1] && arr[1][1] && arr[2][1] == '0') ||
    // (arr[0][2] && arr[1][2] && arr[2][2] == '0') ||
    // (arr[0][2] && arr[1][1] && arr[0][2] == '0') ||
    // (arr[0][0] && arr[1][1] && arr[2][2] == '0')
    // )
    // {   if (x0)
    //     {
    //         std::cout <<"win: 0"<< std::endl;
    //     }
    //     else
    //     {
    //         std::cout <<"win: X"<< std::endl;
    //     }
    //    ch = true;
    // }
    if (index == 9)
    {
        std::cout <<"Draw"<< std::endl;
        ch=true;
    }
}

void vvod()
{   
    bool repeat=true;
    
    while (repeat!=false)
    {       
        std::cout <<index<< std::endl;
        repeat=true;
        if (x0)
        {
            std::cout <<"Turn: X"<< std::endl;
        }
        else
        {
            std::cout <<"Turn: Y"<< std::endl;
        }
        
        
        std::cout <<"Enter cell number:"<< std::endl;
        std::cout <<"x: "<< std::flush;
        std::cin >> x;
        std::cout <<"y: "<< std::flush;
        std::cin >> y;
        //arr[0][0]='x';
        std::cout << std::endl;
        if (x < 4 && y < 4 && x != 0 && y != 0 && arr[x-1][y-1] != 'x' && arr[x-1][y-1] != '0')
        {   
            repeat=false;
            index++;
            //x0=true;
        }
        if (repeat)
        {
            std::cout <<"\nError. Repeat enter cell number:"<< std::endl;
        }
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
        
        
        //x0=false;
    }
    check();
    while (ch != true)
    {
        vvod();
    }
    
}



int main(){
    char x_0;
    bool flag = false;
    bool fl = false;
    
    while (fl!=true)
    {
        std::cout <<"You 'X' or '0' ?: "<< std::endl;
        std::cout <<"I am: "<< std::flush;
        std::cin >> x_0;
        std::cout <<x_0<< std::endl;
        if (x_0 != 'x' && x_0 != '0') {
            std::cout <<"\nError1. Repeat:"<< std::endl;
        }
        if (x_0 != 'x' )
        {
            flag=true;
        }
        else
        {
          fl=true;  
        }
        if (x_0 != '0')
        {
            flag=true;    
        }
        else
        {
          fl=true;  
        }
        
        
        if (flag)
        {
            std::cout <<"\nError. Repeat:"<< std::endl;
        }
    }
    if (x_0 == 'x')
    {
        x0 = true;
    }
    else
    {
        x0 = false;
    }
    
    massiv();
    //arr[0][0]='x';
    vvod();
    // for (int i = 0; i < 3; i++)
    // {
    //     int sum = 0;
    //     std::cout << "Teams "<< i+1 << ": " << std::flush;
    //     for (int j = 0; j < 3; j++)
    //     {

    //         sum += arr[i][j];
    //         std::cout << arr[i][j] << " " << std::flush;
    //     }
    //     std::cout<<std::endl;
    // }
    // while (arr[0][0] != "0"){
    //     std::cout <<"Turn: "<< std::endl;
    //     std::cout <<"Enter cell number:"<< std::endl;
    //     std::cout <<"x: "<< std::flush;
    //     std::cin >> x;
    //     std::cout <<"y: "<< std::flush;
    //     std::cin >> y;
    // }
    
}