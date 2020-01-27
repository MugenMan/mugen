#include <iostream>
#include <string>

int main (){
    bool a=true;
    std::string s;
    
    //for (int q=0; q < 5; q++){
    std::cout << "Enter string: " << std::flush;
    std::getline(std::cin, s); //вывод с пробелами
    
    //std::cout << s << std::endl;
 
    for(int i= 0, j= s.size()-1; i < (s.size()-1)/2; i++,j--)
    {
        if (s[i]==' ')
            i++;
        if(s[j]==' ')
            j--;
        if (s[i]!=s[j]){
            a=false;
            break;
        }
 
    }
    
    if(a){
        std::cout<<"palindrome"<<std::endl;
        }
    else {
        std::cout<<"not palindrome"<<std::endl;
        }

    //     for (int k = 0; k <= (s.size()-1)/2; k++){
    //     //a=false;
    //     if (s[k]==s[s.size()-1-k]){
    //         a=true;
    //         b=true;
           
            
    //     }
    //     else if (s[k]!=s[s.size()-1-k] && s[k]==' ' || s[s.size()-1-k]==' '){
    //         a=false;
    //         b=true;
    //         if (s[k]==s[s.size()-2-k] || s[k+1]==s[s.size()-1-k]){
    //         	a=true;
    //         }
    //     }
    //     else {
    //     	a=false;
    //     	b=false;
    //     }
    //     std::cout << "a= " << a << std::endl;
    //     std::cout << "b= " << b << std::endl;
    //     std::cout << "s[k]= " << s[k] << std::endl;
    //     std::cout << "s[k+1]= " << s[k+1] << std::endl;
    //     std::cout << "s[s]= " << s[s.size()-1-k] << std::endl;
    //     std::cout << "s[s-2]= " << s[s.size()-2-k] << std::endl;

    // }
    // if (!a && b || !a){
    //         std::cout << "no" << std::endl;
    //     }
    // if (a && b){
    //     std::cout << "palindrom" << std::endl;
    // }
    //}
}