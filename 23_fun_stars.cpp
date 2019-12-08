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
	// while (from>=to ){

    //    draw_line(from);
	//    from+=step;
    // }
	// for (int i = from; i >= to; i+=step) {
	// 		draw_line(i);	
	// }
	
	if (from >=to){
		for (int i = from; i >= to; i+=step) {
			draw_line(i);	
		}
	}
	else {
		for (int i = from; i <= to; i+=step) {
			draw_line(i);	
		}
	}
	
}
	

void draw_task(int n) {
	draw_figure(n,3,-2);
	draw_figure(5,n,+2);
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