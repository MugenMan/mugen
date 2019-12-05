#include <iostream>
#include <string>
#include <math.h>

void draw_line(int size) {
	for (int j = 0; j < size; j++) {
		std::cout << "*";
		}
		std::cout << std::endl;
		return;
}

void draw_figure(int from, int to, int step) {
	for (int i = from; i > to; i+=step) {
		for (int j = 0; j < 1; j++) {
			draw_line(i);
		}
	}
	for (int i = to; i <= from; i-=step) {
	 	for (int j = 0; j < 1; j++) {
	 		draw_line(i);
	 	}
	 } return;
	}

void draw_task(int n) {
	draw_figure(n,n-4,-2);
	return;
}

int main()
{
	int n;
	std::cout << "enter n" << std::endl;
	std::cin >> n;
	std::cout << std::endl;
	
	draw_task(n);
	

	//std::cin.get(); std::cin.get();
	return 0;
}