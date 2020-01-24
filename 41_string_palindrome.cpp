#include <iostream>
#include <string>

int main (){
    bool found=false;
    std::string s;
    std::cout << "Enter string: " << std::flush;

    std::getline(std::cin, s); //вывод с пробелами
    std::cout << s << std::endl;
    
    for (int k = 0, j = s.size()-1; k < s.size()/2; k++, j--){
        found=false;
        if (s[k]==s[j]){
            found=true;
        }
        else {
            found=false;
        }

    }
    if (!found){
            std::cout << "no" << std::endl;
        }
    else {
        std::cout << "palindrom" << std::endl;
    }
}