#include <iostream>
#include <map>
#include <string>
#include <vector>

int main()
{
    //std::map<std::string, int> arr;
    
    std::vector<std::map<std::string, std::string>> people;
    std::string s;

std::map<std::string, std::string> person;
    
    while (s != "exit") 
    {
        
        std::cout <<std::endl;

        std::cout <<"Enter last_name: "<<std::flush;
        std::cin >> s;
        person["last_name"] = s;
        people.push_back(person);
        //std::cout <<"Last_name: "<<person["last_name"]<<": "<<std::endl;

        if (s == "exit")
        {
            break;
        }

        std::cout <<"Enter first_name: "<<std::flush;
        std::cin >> s;
        person["first_name"] = s;
        people.push_back(person);
        //std::cout <<"First_name: "<<person["first_name"]<<": "<<std::endl;
        if (s == "exit")
        {
            break;
        }

        
    }
    for (int i = 0; i < people.size(); i++)
    {   
        std::cout <<std::endl;
        std::cout <<"Team - "<<people<<": "<<std::endl;
        
    }

    for (auto it = person.begin(); it != person.end(); it++)
    {   
        std::cout <<std::endl;
        std::cout <<"Team - "<<it->first<<": "<<it->second<<std::endl;
        
    }
    // for (int i = 0; i < n; n++)
    // {
        
    // }

}