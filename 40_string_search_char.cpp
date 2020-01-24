#include <iostream>
#include <string>

int main(){
    char N, a;
    bool found=false;
    std::string s;

    std::cout << "Enter string: " << std::flush;
    std::cin >> s;


    for (int j = 0; j < s.size(); j++){
        std::cout << j << ". " << s[j] << std::endl;
    }
    
    std::cout << "Enter char: " << std::flush;
    std::cin >> a;

    for (int k = 0; k < s.size(); k++){
        if (a== s[k]){   
            found=true;
            std::cout << "index= " << k << std::endl;   
        }
    }
    if (!found){
            std::cout << "no" << std::endl;  
    }

}