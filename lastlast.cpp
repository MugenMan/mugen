#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <fstream>

std::ofstream ofs;
std::ifstream ifs;
int word, n, number, grades_of_subject;
std::string s;
std::string a;
bool s5 = false, s2 = false;
std::vector <int> arr;

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

void add_student()
{
    
    //int qwe = 0;
    while (s != "exit") 
    {   
        std::cout <<"\nEnter last_name: "<<std::flush;
        std::cin >> s;
        if (s == "exit"){break;}
        st.last_name = s;

        std::cout <<"Enter first_name: "<<std::flush;
        std::cin >> s;
        if (s == "exit"){break;}
        st.first_name = s;

        std::cout <<"Enter middle_name: "<<std::flush;
        std::cin >> s;
        if (s == "exit"){break;}
        st.middle_name = s;

        std::cout <<"Enter group: "<<std::flush;
        std::cin >> s;
        if (s == "exit"){break;}
        st.group = s;

        if (s !="exit")
        {
            people.push_back(st);
        }
            //qwe++;
    }
   
}
void write_txt()
{
    ofs.open("new.txt", std::ios::binary);
    //int m = 1;
    int sz = people.size();
    ofs.write((char *)&sz, sizeof(int));
    arr.clear();
    for (int i = 0; i < people.size(); i++)
    {   
        sz = people[i].last_name.size();
        ofs.write((char *)&sz, sizeof(int));
        ofs.write((char *)people[i].last_name.c_str(), people[i].last_name.size());
        
        sz = people[i].first_name.size();
        ofs.write((char *)&sz, sizeof(int));
        ofs.write((char *)people[i].first_name.c_str(), people[i].first_name.size());

        sz = people[i].middle_name.size();
        ofs.write((char *)&sz, sizeof(int));
        ofs.write((char *)people[i].middle_name.c_str(), people[i].middle_name.size());

        sz = people[i].group.size();
        ofs.write((char *)&sz, sizeof(int));
        ofs.write((char *)people[i].group.c_str(), people[i].group.size());

        sz = people[i].arr_of_grade.size();
        ofs.write((char *)&sz, sizeof(int));

        arr.push_back(sz);

        for (auto it = people[i].arr_of_grade.begin(); it != people[i].arr_of_grade.end(); it++)
        {
            sz = it->first.size();
            ofs.write((char *)&sz, sizeof(int));
            ofs.write((char *)it->first.c_str(), it->first.size());
            ofs.write((char *)&it->second, sizeof(int));
        }  

    }
    ofs.close();
    //read++;
}

//раздели выше функцию на две, типо только добавл и только запись в файл

void read_txt()
{
     
    ifs.open("new.txt", std::ios::binary);
    // if (!ifs.good())
    // {
    //     std::cout <<"The student list file is empty or not found. Please add students to the file"<<std::endl;
    //     std::cout <<std::endl;
    // }
    //else
    //{
    int sz;
    ifs.read((char *)&sz, sizeof(int));
    if (sz != 0)
    {
        std::cout <<std::endl;
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
            ifs.read((char *)&word, sizeof(int));

            arr.push_back(word);
            //std::cout <<"Number: "<< arr[i] <<std::endl;
            if (word != 0)
            {
                int grades_of_subject;
                std::string subject;
                for (int j = 0; j < word; j++)
                {
                    ifs.read((char *)&grades_of_subject, sizeof(int));
                    subject.resize(grades_of_subject);
                    ifs.read(&(subject[0]), grades_of_subject);
                    ifs.read((char *)&grades_of_subject, sizeof(int));
                    st.arr_of_grade[subject] = grades_of_subject;    
                }

            }
            
            //if (index == 0){people.push_back(st);}
            people.push_back(st);
            
            // for (int j = 1; j < people.size()-1; j++)
            // {
            //     if (people[i].last_name == people[j].last_name
            //      && people[i].first_name == people[j].first_name
            //      && people[i].middle_name == people[j].middle_name)
            //     {
            //         people.erase(people.begin());
            //     }
            // }
            
            st.arr_of_grade.clear();
        }
    }
        //index++;
        ifs.close();
        std::cout <<std::endl;
    //} 
}
void print_all()
{
    std::cout <<"Number of students: "<< people.size() <<std::endl;
    for (int i = 0; i < people.size(); i++)
    {
        std::cout <<std::endl;
        std::cout <<"Student: "<<i+1<<std::endl;
        std::cout <<"Last_name: "<<people[i].last_name<<std::endl;
        std::cout <<"First_name: "<<people[i].first_name<<std::endl;
        std::cout <<"middle_name: "<<people[i].middle_name<<std::endl;
        std::cout <<"Group: "<<people[i].group<<std::endl;
        //std::cout <<"arr[i] "<<arr[i]<<std::endl;
        if (arr[i] > 0)
        {
            for (auto it =people[i].arr_of_grade.begin();
                it != people[i].arr_of_grade.end(); it++)
            {   
                std::cout <<it->first<<": "<<it->second<<std::endl;
            } 
        }
        
    }
    
    std::cout <<std::endl;
}
void print_short_all()
{
    for (int i = 0; i < people.size(); i++)
    {
        std::cout <<i+1<<". "<<people[i].last_name<<" "<<people[i].first_name<<" "<<people[i].middle_name<<" "<<"("<<people[i].group<<")"<<std::endl;
    }
}
int print_short_one(int number)
{
    std::cout <<number<<". "<<people[number-1].last_name<<" "<<people[number-1].first_name<<" "<<people[number-1].middle_name<<" "<<"("<<people[number-1].group<<")"<<std::endl;

}
int print_all_one(int number)
{
    int i = 0;
    if (arr[number] == 0){ std::cout <<"no ratings found"<<std::endl;}
    if (arr[number] > 0)
    {
        for (auto it =people[number-1].arr_of_grade.begin();
            it != people[number-1].arr_of_grade.end(); it++)
        {   
            std::cout<<it->first<<": "<<it->second<<std::endl;
            i++;
        } 
    }
        
}
void sort()
{
    bool a = true, b = true;
    std::vector<int> sort_5;
    std::vector<int> sort_2;
    print_all();
    for (int i = 0; i < people.size(); i++)
    {
        if (arr[i] > 0)
        {
            for (auto it =people[i].arr_of_grade.begin();
                it != people[i].arr_of_grade.end(); it++)
                {   
                    if (it->second != 5)
                    {
                        a = false;
                    }
                    if (it->second == 2)
                    {
                        b = false;
                    }
                } 
        }
        if (a)
        {
            sort_5.push_back(i);
        }
        if (!b)
        {
            sort_2.push_back(i);
        }
        
    }
    if (s5)
    {
        std::cout<<"List of Excellence: "<<std::endl;
        for (int i = 0; i < sort_5.size(); i++)
        {
            std::cout <<std::endl;
            std::cout <<"Last_name: "<<people[sort_5[i]].last_name<<std::endl;
            std::cout <<"First_name: "<<people[sort_5[i]].first_name<<std::endl;
            std::cout <<"middle_name: "<<people[sort_5[i]].middle_name<<std::endl;
            std::cout <<"Group: "<<people[sort_5[i]].group<<std::endl;
            //std::cout <<"arr[i] "<<arr[i]<<std::endl;
            if (arr[sort_5[i]] > 0)
            {
                for (auto it =people[sort_5[i]].arr_of_grade.begin();
                    it != people[sort_5[i]].arr_of_grade.end(); it++)
                {   
                    std::cout <<it->first<<": "<<it->second<<std::endl;
                } 
            }
            
        }
    }
    if (s2)
    {
       std::cout<<"List of underperforming: "<<std::endl;
        for (int i = 0; i < sort_2.size(); i++)
        {
            std::cout <<std::endl;
            std::cout <<"Last_name: "<<people[sort_2[i]].last_name<<std::endl;
            std::cout <<"First_name: "<<people[sort_2[i]].first_name<<std::endl;
            std::cout <<"middle_name: "<<people[sort_2[i]].middle_name<<std::endl;
            std::cout <<"Group: "<<people[sort_2[i]].group<<std::endl;
            //std::cout <<"arr[i] "<<arr[i]<<std::endl;
            if (arr[sort_2[i]] > 0)
            {
                for (auto it =people[sort_2[i]].arr_of_grade.begin();
                    it != people[sort_2[i]].arr_of_grade.end(); it++)
                {   
                    std::cout <<it->first<<": "<<it->second<<std::endl;
                } 
            }
            
        } 
    }
    
    std::cout <<std::endl;


}
void delete_student()
{
    std::string answer;
    number = 1;
    print_short_all();
    while (number != 0)
    {
        std::cout<<"Enter student number: "<<std::flush;
        std::cin >> number;

        std::cout<<"Are you sure you want to remove the student?\nEnter n (no) or y (yes): "<<std::flush;
        std::cin >> answer;
        if (answer == "n")
            {
                break;  
            }
        if (answer == "y")
        {
            people.erase(people.begin()+number-1);
        }
        
    }
    write_txt();
    
}
void edit_student()
{

    number = 1;
    //std::cout <<"number: "<<number<<std::endl;
    //edit = true;
    while (number != 0)
    { 
        print_short_all();
        std::cout<<"\nEnter student number or enter '0'-exit: "<<std::flush;
        std::cin >> number;
        if (number == 0)
        {
            //edit=false;
            break;
            
        }
        while (n != 8)
        {
            print_short_one(number);
            std::cout<<"\n1. Change last name"<<std::endl;
            std::cout<<"2. Change the name"<<std::endl;
            std::cout<<"3. Change the middle name"<<std::endl;
            std::cout<<"4. Change group"<<std::endl;
            std::cout<<"5. Add grade"<<std::endl;
            std::cout<<"6. Change grade"<<std::endl;
            std::cout<<"7. Delete grade"<<std::endl;
            std::cout<<"8. Back"<<std::endl;
            std::cout<<"\nChoose the desired item: "<<std::flush;
            std::cin >> n;
            if (n == 1)
            {
                std::cout<<"\nEnter new last name: "<<std::flush;
                std::cin >> a;
                people[number-1].last_name = a;
                
            }
            if (n == 2)
            {
                std::cout<<"\nEnter new name: "<<std::flush;
                std::cin >> a;
                people[number-1].first_name = a;
                
            }
            if (n == 3)
            {
                std::cout<<"\nEnter new middle name: "<<std::flush;
                std::cin >> a;
                people[number-1].middle_name = a;
                
            }
            if (n == 4)
            {
                std::cout<<"\nEnter new group: "<<std::flush;
                std::cin >> a;
                people[number-1].group = a;
                
            }
            if (n == 5)
            {
                std::cout<<"\nEnter subject name: "<<std::flush;
                std::cin >> a;
                std::cout<<"Enter grades of subject: "<<std::flush;
                std::cin >> grades_of_subject;
                people[number-1].arr_of_grade[a] = grades_of_subject;
            }
            if (n == 6)
            {
                std::string new_subject_name;
                print_all_one(number);
                std::cout<<"\nEnter subject name: "<<std::flush;
                std::cin >> a;
                std::cout<<"\nEnter NEW subject name: "<<std::flush;
                std::cin >> new_subject_name;
                std::cout<<"\nEnter grades of NEW subject: "<<std::flush;
                std::cin >> grades_of_subject;
                people[number-1].arr_of_grade.erase(a);
                people[number-1].arr_of_grade[new_subject_name] = grades_of_subject;
            }
            if (n == 7)
            {
                print_all_one(number);
                std::cout<<"\nEnter subject name: "<<std::flush;
                std::cin >> a;
                people[number-1].arr_of_grade.erase(a);
                
            }
            write_txt();
        }
        n = 0;
        
    }

}





void choose()
{
    std::cout<<"1. Students list"<<std::endl;
    std::cout<<"2. Add student"<<std::endl;
    std::cout<<"3. Edit student"<<std::endl;
    std::cout<<"4. Delete student"<<std::endl;
    std::cout<<"5. List of Excellence"<<std::endl;
    std::cout<<"6. List of underperforming"<<std::endl;
    std::cout<<"7. Exit"<<std::endl;

    

    std::cout<<"Choose the desired item: "<<std::flush;
    std::cin >> n;
    if (n == 1)
    {
        // if (!ifs.good())
        // {
        //     while (n != 2 && n != 7)
        //     {
        //         std::cout<<"\nFile is empty or not found.\nSelect 2 or 7: "<<std::flush;
        //         std::cin >> n;
        //     }
            
        // }
        // else
        // {
            std::cout<<"\nStudents list"<<std::endl;
            print_all();
        //}
        
        
    }

    if (n == 2)
    {
        add_student();
        write_txt();

    }
    if (n == 3)
    {
        edit_student(); 
    }
    if (n == 4)
    {
        delete_student();
    }
    if (n == 5)
    {
        s5 = true;
        sort();
    }
    if (n == 6)
    {
        s2 = true;
        sort();
    }
}

int main ()
{
    read_txt();
    while (n != 7)
    {
        choose();
    }
}  
