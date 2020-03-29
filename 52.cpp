#include <fstream>
#include <iostream>


int main ()
{
    int n, i = 1;

    int a;
    std::ifstream f("filename.txt");

    while (!f.eof()) {
        f >> a;
        std::cout << a*2 << std::endl;
    }

    f.close();



}