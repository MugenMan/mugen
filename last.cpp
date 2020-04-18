#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <fstream>
#include <time.h>

std::ofstream f;
std::ifstream ifs;
int word;
std::string s;
std::vector<int> number_of_student;
//std::map<std::string, int> arr_of_grade;
std::string grades[]={"maths", "informatics","russian_language","history","physics","economics"};

struct student 
{
    std::string last_name;
    std::string first_name;
    std::string patronymic;
    std::string group;
    std::map<std::string, int> arr_of_grade;
    
};
student st;
std::vector<student> people;
void add_student()
{
    
    int qwe = 0;
    while (s != "exit") 
    {   
        
        std::cout <<std::endl;
        std::cout <<"Enter last_name: "<<std::flush;
        if (qwe == 2){
            s ="exit";
        }
        
        if (qwe == 0){
            s="durov";
        }
        if (qwe == 1){
            s="voronin";
        }
       
        st.last_name = s;
        if (s == "exit")
        {
            break;
        }

        std::cout <<"Enter first_name: "<<std::flush;
        //std::cin >> s;
        if (qwe == 0){
            s="pavel";
        }
        if (qwe == 1){
            s="oleg";
        }

        st.first_name = s;
        if (s == "exit")
        {
            break;
        }

        std::cout <<"Enter patronymic: "<<std::flush;
        //std::cin >> s;
        if (qwe == 0){
            s="evgenevich";
        }
        if (qwe == 1){
            s="alexsandrovich";
        }
       
        st.patronymic = s;
        if (s == "exit")
        {
            break;
        }

        
        std::cout <<"Enter group: "<<std::flush;
        //std::cin >> s;
        if (qwe == 0){
            s="avb162";
        }
        if (qwe == 1){
            s="avb161";
        }

        st.group = s;
        if (s == "exit")
        {
            break;
        }
        for (int j = 0; j < 6; j++)
        {
            s = grades[j];
            st.arr_of_grade[s] = rand()%(5-2+1)+2;
        }
        people.push_back(st);
        qwe++;
    }
    
    // for (int i = 0; i < people.size(); i++)
    // {
    //     people[i].number_of_student;
    //     for (int i = 0; i < 6; i++)
    //     {
    //         s = grades[i];
    //         arr_of_grade[s] = rand()%(5-2+1)+2;
    //     }
        
        
    // }

    int m = 1;
    int sz = people.size();
    f.write((char *)&sz, sizeof(int));
    for (int i = 0; i < people.size(); i++)
    {   
        //int sz;
        
        //f.write((char *)&sz, sizeof(int));
        //f.write((char *)&i+1, sizeof(int));
        //f.write((char *)&m, sizeof(int));
        sz = people[i].last_name.size();
        f.write((char *)&sz, sizeof(int));
        f.write((char *)people[i].last_name.c_str(), people[i].last_name.size());
        
        sz = people[i].first_name.size();
        f.write((char *)&sz, sizeof(int));
        f.write((char *)people[i].first_name.c_str(), people[i].first_name.size());

        sz = people[i].patronymic.size();
        f.write((char *)&sz, sizeof(int));
        f.write((char *)people[i].patronymic.c_str(), people[i].patronymic.size());

        sz = people[i].group.size();
        f.write((char *)&sz, sizeof(int));
        f.write((char *)people[i].group.c_str(), people[i].group.size());

        
        for (auto it = people[i].arr_of_grade.begin(); it != people[i].arr_of_grade.end(); it++)
        {   
            //std::cout <<std::endl;
            std::cout <<it->first<<": "<<it->second<<std::endl;
            sz = it->first.size();
            f.write((char *)&sz, sizeof(int));
            f.write((char *)it->first.c_str(), it->first.size());
            f.write((char *)&it->second, sizeof(int));
            
        }

    }
    f.close();
}
void read_txt()
{
    ifs.open("new.txt", std::ios::binary);
    //std::cout<<ifs.good()<<std::endl;
    int sz = people.size();
    ifs.read((char *)&sz, sizeof(int));
    std::cout <<"Number of students: "<< sz <<std::endl;
    for (int i = 0; i < sz; i++)
    { 
        //ifs.read((char *)&i, sizeof(int));
        //std::cout <<i<<": "<<std::endl;
        //number_of_student.push_back(i);
        ifs.read((char *)&word, sizeof(int));
        //std::cout <<word<<": "<<std::endl;
        st.last_name.resize(word);
        ifs.read(&(st.last_name[0]), word);

        ifs.read((char *)&word, sizeof(int));
        st.first_name.resize(word);
        ifs.read(&(st.first_name[0]), word);

        ifs.read((char *)&word, sizeof(int));
        st.patronymic.resize(word);
        ifs.read(&(st.patronymic[0]), word);

        ifs.read((char *)&word, sizeof(int));
        st.group.resize(word);
        ifs.read(&(st.group[0]), word);
        people.push_back(st);
    }
    ifs.close();

    // for (int i = 0; i < people.size(); i++)
    // {
    //     //people[i].arr_of_grade;
    //     for (int j = 0; j < 6; j++)
    //     {
    //         s = grades[j];
    //         st.arr_of_grade[s] = rand()%(5-2+1)+2;
    //         //people.push_back(st);
    //     }
    //     people.push_back(st);
        
    // }
    // for (auto i = st.arr_of_grade.begin(); i != st.arr_of_grade.end(); i++)
    // {   
    //     std::cout <<i->first<<": "<<i->second<<std::endl;
        
    // }
    for (int i = 0; i < people.size(); i++)
    { 
        std::cout <<i+1<<". "<<people[i].last_name<<" "<<people[i].first_name<<" "<<people[i].patronymic<<" "<<"("<<people[i].group<<")"<<std::endl;
        //std::cout <<people[i].arr_of_grade.begin()->first<<std::endl;
        // std::cout <<"Last_name: "<<people[i].last_name<<std::endl;
        // std::cout <<"First_name: "<<people[i].first_name<<std::endl;
        // std::cout <<"Patronymic: "<<people[i].patronymic<<std::endl;
        // std::cout <<"Group: "<<people[i].group<<std::endl;


    }
    
}


int main ()
{
    srand(time(NULL));
    int n;
    std::cout<<"1. Students list"<<std::endl;
    std::cout<<"Choose the desired item: "<<std::flush;
    std::cin >> n;
    if (n == 1)
    {
        std::cout <<std::endl;
        std::cout<<"Students list"<<std::endl;
        read_txt();
    }

    if (n == 2)
    {
        f.open("new.txt", std::ios::binary);
        add_student();
    }
    if (n == 3)
    {
        f.open("new.txt", std::ios::binary);
        add_student();
    }
}  
