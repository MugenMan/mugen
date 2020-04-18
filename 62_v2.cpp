#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <fstream>
std::ifstream f("new.txt", std::ios::binary);
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
    //std::string s1;
    //std::cout <<"Age: "<<people.size()<<std::endl;
    //int sz = people.size();
    int sz, word;
    f.read((char *)&sz, sizeof(int));
    std::cout<< "Number of people: " << sz <<std::endl;
    std::string s1(sz, ' ');


    for (int i = 0; i < sz; i++)
    {   
        f.read((char *)&word, sizeof(int));

        
        p.last_name.resize(word);
        f.read(&(p.last_name[0]), word);
        f.read((char *)&word, sizeof(int));
        p.first_name.resize(word);
        f.read(&(p.first_name[0]), word);
        
        f.read((char *)&(p.age), sizeof(int));
 
        people.push_back(p);
    }

    for (int i = 0; i < people.size(); i++)
    { 
        std::cout <<"Last_name: "<<people[i].last_name<<std::endl;
        std::cout <<"First_name: "<<people[i].first_name<<std::endl;
        std::cout <<"Age: "<<people[i].age<<std::endl;

    }
    // for (int i = 0; i < s1.size(); i++)
    // {
    //      std::cout<< s1[i] <<std::endl;
    // }
    












    // int n;
    // std::cout <<"Enter the desired age: "<<std::flush;
    // std::cin >> n;


    // for (int i = 0; i < people.size(); i++)
    // {   
       
    //     sz = people[i].last_name.size();
        
    //     f.write((char *)people[i].last_name.c_str(), people[i].last_name.size());
    //     f.write((char *)&sz, sizeof(int));
      
        
    //     sz = people[i].first_name.size();
    //     f.write((char *)people[i].first_name.c_str(), people[i].first_name.size());
    //     f.write((char *)&sz, sizeof(int));

    // }

    // for (auto it = person.begin(); it != person.end(); it++)
    // {   
    //     std::cout <<std::endl;
    //     std::cout <<"Team - "<<it->first<<": "<<it->second<<std::endl;
        
    // }
    // for (int i = 0; i < n; n++)
    // {
        
    // }

}