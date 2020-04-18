#include <iostream>
#include <string>
#include <fstream>

int main()
{
    int a, i = 1;
    std::cout<<"Enter number: "<<std::flush;
    std::cin >> a;

    std::ofstream f("binary.txt", std::ios::binary);
    while (i != a)
    {
        f.write((char *)&i, sizeof(short));
        //std::cout << a << std::endl;
        i++;
    }
    f.close();
}