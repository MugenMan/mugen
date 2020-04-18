#include <iostream>
#include <string>
#include <fstream>

int main()
{
    int a;
    short i;
    //std::cout<<"Enter number: "<<std::flush;
    //std::cin >> a;

    std::ifstream f("binary.txt", std::ios::binary);
    while (!f.eof())
    {
        while (f.read((char *)&i, sizeof(short)))
        f.read((char *)&i, sizeof(short));
        std::cout << i*3 << std::endl;
        //std::cout << a << std::endl;
    }
    f.close();
}