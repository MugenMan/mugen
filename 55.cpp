#include <iostream>
#include <string>
#include <fstream>
#include <time.h>

using namespace std;
int main()
{
//setlocale(LC_ALL, "Russian");
srand(time(NULL));
int n, m, sum = 0, max = 0, min = 0, column = 0, w=0;
cout << "Enter size matr - M and N: ";
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
int **matr = new int* [n];
for (int i = 0; i < m; i++)
{
matr[i] = new int [n];
for (int j = 0; j < n; j++)
{
matr[i][j] = rand()%(10-5+1)+5;
cout <<matr[i][j]<<" "<<flush;
}
cout<<std::endl;
}
cout<<std::endl;
for (int j = 0; j < m; j++)
{
for (int i = 0; i < n; i++)
{
sum += matr[i][j];
}
while (w==0)
{
cout <<"sum elements in column: ";
w++;
}
cout<<sum<<" "<<std::flush;
if (max < sum)
{
max = sum;
column = j;
}
if (max == sum)
{
if (column > j)
{
column = j;
}
}
sum = 0;
}
for (int i = 0; i < n; i++)
{
if (matr[i][column] < matr[min][column])
{
min = i;
}
}
cout<<std::endl;
cout<<"\nHighest value: "<<max<<" \nin the column: "<<column+1<<"\nMinimum element: "<<matr[min][column];
}
