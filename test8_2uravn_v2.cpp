#include <iostream>
#include <string>
#include <math.h>

int main()
{
	double a,b,c,D, x1,x2,x;
	std::cout << "Enter a,b,c" << std::endl;
	std::cin >> a >> b >> c;


	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;
	std::cout << "c = " << c << std::endl;
	std::cout << a << "x^2+" << b << "x+" << c << "=0 \n" << std::endl;
	

	if (a==0)
	{
		if ((b==0) && (c==0))
			{
				std::cout << "anything" << std::endl;	
			}
			else if (b==0)
			{
				std::cout << "no roots" << std::endl;	
			}
			else if (c==0)
			{
				std::cout << "x = 0" << std::endl;	
			}
			else
			{
				x=-c/b;
				std::cout << "x = " << x << std::endl;
			}
	}
else 
{
	D=b*b-4*a*c;
	if (D < 0)
	{
		std::cout << "no roots" << std::endl;
	}
	else if (D == 0)
	{
		x=-b/(2*a);
		std::cout << "one roots = " << x << std::endl;
	}
	else
	{
		x1 = (-b+sqrt(D))/(2*a);
		x2 = (-b-sqrt(D))/(2*a);
		std::cout << "x1 = " << x1 << std::endl;
		std::cout << "x2 = " << x2 << std::endl;
	}
}
	return 0;
}