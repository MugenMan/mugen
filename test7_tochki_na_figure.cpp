#include <iostream>
#include <string>

int main()
{
	int x, y, h, w, x2, y2;
	std::cout << "Enter number x,y,h,w,x2,y2" << std::endl;
	std::cin >> x >> y >> h >> w >> x2 >> y2;
	

	std::cout << "x= " << x << std::endl;
	std::cout << "y= " << y << std::endl;
	std::cout << "h= " << h << std::endl;
	std::cout << "w= " << w << std::endl;
	std::cout << "x2= " << x2 << std::endl;
	std::cout << "y2= " << y2 << std::endl;

	if ((x2 > x && x2<x+w && y2>y-h && y2 < y))
	{
	    std::cout << "point enters" << std::endl;
	}
	else if ((x2 >= x && x2<=x + w && y2 <= y && y2 >= y - h))
	{
		std::cout << "point hits" << std::endl; 
	}
	else {
		std::cout << "no enters" << std::endl;
	}
	
	std::cin.get(); std::cin.get();
	return 0;
}