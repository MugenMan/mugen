#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <fstream>
std::ofstream f("new.txt", std::ios::binary);
int main()
{
    std::string s = "test";
    int sz = s.size();

    f.write((char *)&sz, sizeof(int));

    //f.write((char *)s.c_str(), s.size());

}