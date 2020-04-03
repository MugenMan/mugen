#include <fstream>
#include <iostream>
#include <string>

int main(){
std::string s, n;
std::ofstream q;
std::ifstream f;

//std::cin>>n;
n = "oleg";

while (!f.eof()) {
  f.open("x_0.txt");
  f >> s;
  //std::cout << s << std::endl;
  if (s == n){
    std::cout << "test" << std::endl; 
  }
  //std::cout << s << std::endl;
}
f.close();
q.open("x_0.txt");
q << n <<" "<< 5 <<std::endl;
q.close();
}