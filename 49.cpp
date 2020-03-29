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
    
    
    
    std::string s;
    std::vector<Person> people;
    Person p;
    
    while (s != "exit") 
    {   
        
        int a;
    
        std::cout <<std::endl;
        

        std::cout <<"Enter last_name: "<<std::flush;
        std::cin >> s;
       
        p.last_name = s;
        if (s == "exit")
        {
            break;
        }

        std::cout <<"Enter first_name: "<<std::flush;
        std::cin >> s;
        
        p.first_name = s;
        if (s == "exit")
        {
            break;
        }

        std::cout <<"Enter age: "<<std::flush;
        std::cin >> a;
        p.age = a;
        people.push_back(p);
    }

    int n;
    std::cout <<"Enter the desired age: "<<std::flush;
    std::cin >> n;


    for (int i = 0; i < people.size(); i++)
    {   
        std::cout <<std::endl;
        if (people[i].age > n)
        {
            std::cout <<"Last_name: "<<people[i].last_name<<std::endl;
            std::cout <<"First_name: "<<people[i].first_name<<std::endl;
            std::cout <<"Age: "<<people[i].age<<std::endl;
        }
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