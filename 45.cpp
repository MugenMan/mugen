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
    
    // if ((arr[0][0] == x_or_0 && arr[0][1] == x_or_0 && arr[0][2] == x_or_0 ) || 
    // (arr[1][0] == x_or_0 && arr[1][1] == x_or_0 && arr[1][2] == x_or_0 ) ||
    // (arr[2][0] == x_or_0 && arr[2][1] == x_or_0 && arr[2][2] == x_or_0 ) ||
    // (arr[0][0] == x_or_0 && arr[1][0] == x_or_0 && arr[2][0] == x_or_0 ) ||
    // (arr[0][1] == x_or_0 && arr[1][1] == x_or_0 && arr[2][1] == x_or_0 ) ||
    // (arr[0][2] == x_or_0 && arr[1][2] == x_or_0 && arr[2][2] == x_or_0 ) ||
    // (arr[0][2] == x_or_0 && arr[1][1] == x_or_0 && arr[0][2] == x_or_0 ) ||
    // (arr[0][0] == x_or_0 && arr[1][1] == x_or_0 && arr[2][2] == x_or_0 )
    // )
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
    (arr[0][1] == x_or_0 && arr[1][1] == x_or_0 && arr[2][2] == x_or_0))
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
    
    //std::cout <<ch<< std::endl;
    //std::cout <<index<< std::endl;
    //std::cout <<x0<< std::endl;
    // if (index == 9 && !ch){
    //         check();
    //     }
    if (ch){
        std::cout <<"win: X"<< std::endl;
    }
}

void vvod()
{   
    bool repeat=true;
    if (index == 9){
           repeat=false; 
        }
    while (repeat!=false)
    {     
          
        //std::cout <<index<< std::endl;
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
        
        
        
        
        
        if (ch){
        std::cout <<"win: X"<< std::endl;
    }
        
        
        
        //x0=false;
    }
    check();
    // if (index == 9){
    //     check();
    //     if (ch)
    //     {
    //         std::cout <<"Win x"<< std::endl;
    //         ch=true;
    //     }
    //     else
    //     {
    //         std::cout <<"Draw"<< std::endl;
    //         ch=true;
    //     }
        
       
    if (ch){
        std::cout <<"win: X"<< std::endl;
    }
    
    while (ch != true)
    {   
        vvod();
    }
    
}



int main(){
    char x_0;
    bool flag = false;
    
    x0 = true;

    massiv();
   
    vvod();
    // while (flag!=true)
    // {
    //     std::cout <<"You 'X' or '0' ?: "<< std::endl;
    //     std::cout <<"I am: "<< std::flush;
    //     std::cin >> x_0;
    //     //std::cout <<x_0<< std::endl;
    //     if (x_0 != 'x' && x_0 != '0')
    //     {
    //         std::cout <<"\nError. Repeat:"<< std::endl;
    //     }
    //     else
    //     {
    //         flag=true; 
    //     }
       
    // }
    // if (x_0 == 'x')
    // {
    //     x0 = true;
    // }
    // else
    // {
    //     x0 = false;
    // }
    
    



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