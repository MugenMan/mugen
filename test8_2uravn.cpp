
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
	
	if ((a == 0) && (b == 0) && (c == 0))
	{
		std::cout << "anything" << std::endl;
	}

	if ((a !=0) && (b != 0) && (c != 0))
	{
		D = b*b-4*a*c;
		std::cout << "D = " << D << std::endl;
		if (D > 0) 
		{
			std::cout << "D > 0 - 2 roots" << std::endl;
			x1 = (-b + sqrt(D)) / 2 * a;
			x2 = (-b - sqrt(D)) / 2 * a;
			std::cout << "x1 = (-b + sqrt(D)) / 2 * a = " << x1 << std::endl;
			std::cout << "x2 = (-b - sqrt(D)) / 2 * a = " << x2 << std::endl;
		}
		
		else if (D==0)
		{
			std::cout << "D = 0 - 1 roots" << std::endl;
			x = -b / (2 * a);
			std::cout << "x = -b / (2 * a) = " << x << std::endl;
		}
		else
		{
			std::cout << "D < 0 - no roots" << std::endl;
		}
	}
	else if ((a != 0) && (b == 0) && (c != 0))
	{
		if (((a < 0) && (c > 0)) || ((a > 0) && (c < 0)))
		{
			x1 = (sqrt(-c / a));
			x2 = (-sqrt(-c / a));
			std::cout << "x1 = (sqrt(-c / a)) = " << x1 << std::endl;
			std::cout << "x2 = (-sqrt(-c / a)) = " << x2 << std::endl;
		}
		else if (((a > 0) && (c > 0)) || ((a < 0) && (c < 0)))
		{
			std::cout << "x^2 = -c / a = " << -c / a << std::endl;
			std::cout << "There are no roots, because a square cannot be equal to a negative number" << std::endl;
		}
	}
	
	else if ((a != 0) && (b != 0) && (c == 0))
	{
		x1 = 0;
		x2 = ( -b) / a;
		std::cout << "x1 = " << x1 << std::endl;
		std::cout << "x2 = ( -b) / a = " << x2 << std::endl;
	}
	else if (a==0)
	{
		if ((b != 0) && (c != 0))
		{
			x = -c / b;
			std::cout << "x = -c / b = " << x << std::endl;
		}
		else if ((b == 0) && (c != 0))
		{
			std::cout << "c = " << c << std::endl;
		}
		else if ((b != 0) && (c == 0))
		{
			std::cout << "x = " << 0 / b << std::endl;
		}
	}

	std::cin.get(); std::cin.get();
	return 0;
}
