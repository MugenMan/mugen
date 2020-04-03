#include <iostream>
#include <string>
#include <time.h>
#include <cstring>

using namespace std;
int main()
{
//setlocale(LC_ALL, "Russian");
srand(time(NULL));
int n, m, sum = 0, max = 0;
cout << "Enter size matr M and N: ";
while (!(cin >> m))
{
cout << "Wrong input\n";
cout << "Enter the number of lines - M:";
cin.clear();
fflush(stdin);
}
while (!(cin >> n))
{
cout << "Wrong input\n";
cout << "Enter the number of columns - N:";
cin.clear();
fflush(stdin);
}
int **arr = new int* [n];
for (int i = 0; i < m; i++)
{
arr[i] = new int [n];
for (int j = 0; j < n; j++)
{
arr[i][j] = rand()%(10+10+1)-10;
cout <<arr[i][j]<<" "<<flush;
}
cout<<std::endl;
}
cout<<std::endl;

max = abs(arr[0][0]);
for (int k = 0; k < m; k++)
{
for (int l = 0; l < n; l++) 
{
if (abs(arr[k][l]) > max)
{
max = abs(arr[k][l]);
}
}
}
std::string buffer;
std::string buffer2;
for (int i = 0; i < m; i++)
{
for (int k = 0; k < n; k++) 
{
if (max == abs(arr[i][k]))
{
buffer.push_back(i+'0');
buffer2.push_back(k+'0');     
}
}
}
cout<<"The value of the largest modulo element = "<<max<<std::endl;
cout<<"Indexes of elements with a given value:"<<std::endl;
for (int i = 0; i< buffer.length(); i++)
{
cout <<"i= "<<buffer[i]<<" "<<flush;
cout <<"j= "<<buffer2[i]<<" "<<flush;
cout<<std::endl;
}
}