#include <iostream>
#include <map>
#include <string>
#include <vector>

struct Person 
{
std::string last_name;
std::string first_name;
int age;
};

int main()
{
    
    
    //std::vector<std::map<std::string, std::string>> people;
    std::string s;


    
    while (s != "exit") 
    {   
        int a;
        //std::map<std::string, std::string> person;
        std::cout <<std::endl;
        Person p;

        std::cout <<"Enter last_name: "<<std::flush;
        std::cin >> s;
        //person["last_name"] = s;
        p.last_name = s;
        if (s == "exit")
        {
            break;
        }

        std::cout <<"Enter first_name: "<<std::flush;
        std::cin >> s;
        //person["first_name"] = s;
        //people.push_back(person);
        p.first_name = s;
        if (s == "exit")
        {
            break;
        }

        std::cout <<"Enter age: "<<std::flush;
        std::cin >> a;
        p.age = a;
    }
    for (int i = 0; i < people.size(); i++)
    {   
        std::cout <<std::endl;
        std::cout <<"Last_name: "<<people[i]["last_name"]<<std::endl;
        std::cout <<"First_name: "<<people[i]["first_name"]<<std::endl;
    }

    // for (auto it = person.begin(); it != person.end(); it++)
    // {   
    //     std::cout <<std::endl;
    //     std::cout <<"Team - "<<it->first<<": "<<it->second<<std::endl;
        
    // }
    // for (int i = 0; i < n; n++)
    // {
        
    // }

}