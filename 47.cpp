#include <iostream>
#include <map>
#include <string>

int main()
{
    std::map<std::string, int> arr;
    std::string s;
    int n;
    

    // std::cout << "Enter the number of teams: "<< std::flush;
    // std::cin >> n;

    while (s != "exit") 
    {
        //arr[i] = rand()%(10-1+1)+1;
        std::cout <<std::endl;
        std::cout <<"Enter name team"<<std::endl;
        std::cin >> s;
        if (s == "exit")
        {
            break;
        }
        arr[s] = rand()%(10-1+1)+1;

        
    }
    for (auto it = arr.begin(); it != arr.end(); it++)
    {   
        std::cout <<std::endl;
        std::cout <<"Team - "<<it->first<<": "<<it->second<<std::endl;
        
    }
    // for (int i = 0; i < n; n++)
    // {
        
    // }

}