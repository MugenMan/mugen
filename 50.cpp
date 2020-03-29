#include <fstream>
#include <iostream>


int main ()
{
    int n, i = 1;

    std::cout <<"Enter number: "<<std::flush;
    std::cin >> n;

    std::ofstream f("filename.txt");

    while (i != n)
    {
        f << i <<std::endl;
        i++;    
    }
    
    f.close();

}