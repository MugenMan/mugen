#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <fstream>
#include <time.h>

std::ofstream f;
std::ifstream ifs;
int word, grades_of_subject, n, number=999, index = 0;
std::string s;
std::string subject;
std::string a;
std::vector<int> number_of_student;
bool edit = false, write = false;
//std::map<std::string, int> arr_of_grade;
std::string grades[]={"maths", "informatics","russian_language","history","physics","economics"};

struct student 
{
    std::string last_name;
    std::string first_name;
    std::string middle_name;
    std::string group;
    std::map<std::string, int> arr_of_grade;
    
};
student st;
std::vector<student> people;
void chose()
{
    std::cout<<"1. Students list"<<std::endl;
    std::cout<<"2. Add student"<<std::endl;
    std::cout<<"3. Edit student"<<std::endl;
    std::cout<<"Choose the desired item: "<<std::flush;
    std::cin >> n;
}
void add_student()
{
    f.open("new.txt", std::ios::binary);
    int qwe = 0;
    if (!write)
    {
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

            std::cout <<"Enter middle_name: "<<std::flush;
            //std::cin >> s;
            if (qwe == 0){
                s="evgenevich";
            }
            if (qwe == 1){
                s="alexsandrovich";
            }
        
            st.middle_name = s;
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
            // for (int j = 0; j < 6; j++)
            // {
            //     s = grades[j];
                //st.arr_of_grade[s] = rand()%(5-2+1)+2;
                //st.arr_of_grade[a] = grades_of_subject;
            //}
            people.push_back(st);
            qwe++;
        }
    }

    //people[number].arr_of_grade.begin()->first = a;
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

        sz = people[i].middle_name.size();
        f.write((char *)&sz, sizeof(int));
        f.write((char *)people[i].middle_name.c_str(), people[i].middle_name.size());

        sz = people[i].group.size();
        f.write((char *)&sz, sizeof(int));
        f.write((char *)people[i].group.c_str(), people[i].group.size());


        if (write){
            if (i == number-1){
        sz = people[number-1].arr_of_grade.begin()->first.size();
        f.write((char *)&sz, sizeof(int));
        f.write((char *)people[number-1].arr_of_grade.begin()->first.c_str(), people[number-1].arr_of_grade.begin()->first.size());
        f.write((char *)&people[number-1].arr_of_grade.begin()->second, sizeof(int));
        }
        }// if (write){
        // for (auto it = people[i].arr_of_grade.begin(); it != people[i].arr_of_grade.end(); it++)
        // {   
        //     //std::cout <<std::endl;
        //     std::cout <<it->first<<": "<<it->second<<std::endl;
        //     sz = it->first.size();
        //     f.write((char *)&sz, sizeof(int));
        //     f.write((char *)it->first.c_str(), it->first.size());
        //     f.write((char *)&it->second, sizeof(int));
            
        // }
        // }

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
       
        ifs.read((char *)&word, sizeof(int));
        st.last_name.resize(word);
        ifs.read(&(st.last_name[0]), word);

        ifs.read((char *)&word, sizeof(int));
        st.first_name.resize(word);
        ifs.read(&(st.first_name[0]), word);

        ifs.read((char *)&word, sizeof(int));
        st.middle_name.resize(word);
        ifs.read(&(st.middle_name[0]), word);

        ifs.read((char *)&word, sizeof(int));
        st.group.resize(word);
        ifs.read(&(st.group[0]), word);

        
        int grades_of_subject;
        std::string subject;

        // for (auto it = people[i].arr_of_grade.begin(); it != people[i].arr_of_grade.end(); it++)
        // {   
           
        //     for (int i = 0; i < 6; i++)
        //     {
        //         ifs.read((char *)&grades_of_subject, sizeof(int));
        //         subject.resize(grades_of_subject);
        //         ifs.read((char *)&grades_of_subject, sizeof(int));
        //         st.arr_of_grade[subject] = grades_of_subject;
        //     }
            
           
            
        // }
        if (index == 0){people.push_back(st);}
        
    }
    index++;
    ifs.close();
    
    for (int i = 0; i < people.size(); i++)
    { 
        if (edit)
        {
            std::cout <<i+1<<". "<<people[i].last_name<<" "<<people[i].first_name<<" "<<people[i].middle_name<<" "<<"("<<people[i].group<<")"<<std::endl;
        }
        else 
        {
            std::cout <<std::endl;
            std::cout <<"Student: "<<i+1<<std::endl;
            std::cout <<"Last_name: "<<people[i].last_name<<std::endl;
            std::cout <<"First_name: "<<people[i].first_name<<std::endl;
            std::cout <<"middle_name: "<<people[i].middle_name<<std::endl;
            std::cout <<"Group: "<<people[i].group<<std::endl;
        }
        // for (auto it = people[i].arr_of_grade.begin(); it != people[i].arr_of_grade.end(); it++)
        // {   
             
        //     std::cout <<it->first<<": "<<it->second<<std::endl;
            
        // }
        //std::cout <<people[i].arr_of_grade.begin()->first<<std::endl;
        
        


    }
    
}
void edit_student()
{
    //std::string a;
    
    edit = true;
    while (number != 0)
    { 
        read_txt();
        std::cout<<std::endl;
        std::cout<<"Enter student number or enter '0'-exit: "<<std::flush;
        std::cin >> number;
        if (number == 0)
        {
            break;
            
        }
        while (n != 8)
        {
            std::cout<<std::endl;
            std::cout<<"1. Change last name"<<std::endl;
            std::cout<<"2. Change the name"<<std::endl;
            std::cout<<"3. Change the middle name"<<std::endl;
            std::cout<<"4. Change group"<<std::endl;
            std::cout<<"5. Add grade"<<std::endl;
            std::cout<<"6. Change grade"<<std::endl;
            std::cout<<"7. Delete grade"<<std::endl;
            std::cout<<"8. Back"<<std::endl;
            std::cout<<std::endl;
            std::cout<<"Choose the desired item: "<<std::flush;
            std::cin >> n;
            if (n == 1)
            {
                std::cout <<std::endl;
                std::cout<<"Enter new last name: "<<std::flush;
                std::cin >> a;
                people[number-1].last_name = a;
                
            }
            if (n == 2)
            {
                std::cout <<std::endl;
                std::cout<<"Enter new name: "<<std::flush;
                std::cin >> a;
                people[number-1].first_name = a;
                
            }
            if (n == 3)
            {
                std::cout <<std::endl;
                std::cout<<"Enter new middle name: "<<std::flush;
                std::cin >> a;
                people[number-1].middle_name = a;
                
            }
            if (n == 4)
            {
                std::cout <<std::endl;
                std::cout<<"Enter new group: "<<std::flush;
                std::cin >> a;
                people[number-1].group = a;
                
            }
            if (n == 5)
            {
                std::cout <<std::endl;
                std::cout<<"Enter subject name: "<<std::flush;
                std::cin >> a;
                std::cout<<"Enter  grades of subject: "<<std::flush;
                std::cin >> grades_of_subject;
                //add_student();
                //st.arr_of_grade[a] = grades_of_subject;
                //people.push_back(st);
                //people[number].group = a;
                people[number-1].arr_of_grade[a] = grades_of_subject;
            }
            if (n == 6)
            {
                std::cout <<std::endl;
                std::cout<<"Enter the name: "<<std::flush;
                std::cin >> a;
                people[number-1].first_name = a;
                
            }
            if (n == 7)
            {
                std::cout <<std::endl;
                std::cout<<"Enter the name: "<<std::flush;
                std::cin >> a;
                people[number-1].first_name = a;
                
            }
            add_student();
        }
    }
    //if (number == 0){chose();}
}

int main ()
{
    srand(time(NULL));
    //int n;
    chose();
    if (n == 1)
    {
        std::cout <<std::endl;
        std::cout<<"Students list"<<std::endl;
        read_txt();
    }

    if (n == 2)
    {
        //std::cout<<"Choose the desired item: "<<std::flush;
        //std::cin >> n;
        //f.open("new.txt", std::ios::binary);
        add_student();
        //f.close();
    }
    if (n == 3)
    {
        //ifs.open("new.txt", std::ios::binary);
        write = true;
        edit_student();
    }
}  
