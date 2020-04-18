#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <fstream>
std::ofstream f("new.txt", std::ios::binary);
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
    std::string s1 = "...";
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

        //f.write((void *)&(s1.size()), sizeof(int));
        //f.write((void *)s1.c_str(), s1.size());
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
    //std::cout <<"Age: "<<people.size()<<std::endl;
    int sz = people.size();
     f.write((char *)&sz, sizeof(int));


    // int n;
    // std::cout <<"Enter the desired age: "<<std::flush;
    // std::cin >> n;


    for (int i = 0; i < people.size(); i++)
    {   
        //std::cout <<std::endl;
        sz = people[i].last_name.size();
        
        f.write((char *)&sz, sizeof(int));
        f.write((char *)people[i].last_name.c_str(), people[i].last_name.size());
        
        //f.write(std::endl, sizeof(int));
        //std::cout <<"Last_name: "<<people[i].last_name<<std::endl;
        
        sz = people[i].first_name.size();
        f.write((char *)&sz, sizeof(int));
        f.write((char *)people[i].first_name.c_str(), people[i].first_name.size());
        

        //std::cout <<"First_name: "<<people[i].first_name<<std::endl;
        //std::cout <<"Age: "<<people[i].age<<std::endl;

        f.write((char *)&(people[i].age), sizeof(int));
    }
    f.close();

    // for (auto it = person.begin(); it != person.end(); it++)
    // {   
    //     std::cout <<std::endl;
    //     std::cout <<"Team - "<<it->first<<": "<<it->second<<std::endl;
        
    // }
    // for (int i = 0; i < n; n++)
    // {
        
    // }

}