//#include <stdio.h>
//#include <stdlib.h>
//#include <stdbool.h>
#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <fstream>
#include <time.h>
#include <SDL.h>
#include <SDL_image.h>

SDL_Texture* initialize_texture_from_file(const char* file_name, SDL_Renderer* renderer);

static const int width = 313;
static const int height = 343;
std::ifstream ifs;
std::string s, word, input;
char letter;
std::vector <std::string> arr;
int random_index, index = 0, step = 0;
bool not_found = false, found = true;

void sss()
{

}

void sdl()
{
	SDL_Init(SDL_INIT_VIDEO);

	// Create a SDL window
	SDL_Window* window = SDL_CreateWindow("Gallows", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, width, height, SDL_WINDOW_OPENGL);

	// Create a renderer (accelerated and in sync with the display refresh rate)
	SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);
	SDL_SetRenderDrawColor(renderer, 255, 0, 0, 255);

	// Initialize support for loading PNG and JPEG images
	IMG_Init(IMG_INIT_JPG | IMG_INIT_PNG);
	//SDL_Texture* image_texture;

	SDL_Texture* image_texture = initialize_texture_from_file("1.bmp", renderer);
	if (index != 0) { SDL_DestroyTexture(image_texture); }
	if (index == 0)
	{
		SDL_Texture* image_texture = initialize_texture_from_file("1.bmp", renderer);
	}
	if (index == 1)
	{
		SDL_Texture* image_texture = initialize_texture_from_file("2.bmp", renderer);
	}
	if (index == 2)
	{
		SDL_Texture* image_texture = initialize_texture_from_file("3.bmp", renderer);
	}
	if (index == 3)
	{
		SDL_Texture* image_texture = initialize_texture_from_file("4.bmp", renderer);
	}
	if (index == 4)
	{
		SDL_Texture* image_texture = initialize_texture_from_file("5.bmp", renderer);
	}
	if (index == 5)
	{
		SDL_Texture* image_texture = initialize_texture_from_file("6.bmp", renderer);
	}
	if (index == 6)
	{
		SDL_Texture* image_texture = initialize_texture_from_file("7.bmp", renderer);
	}
	int image_width, image_height;

	// Get texture width/height
	SDL_QueryTexture(image_texture, NULL, NULL, &image_width, &image_height);

	// Define where on the "screen" we want to draw the texture
	SDL_Rect texture_destination;

	texture_destination.x = 0;
	texture_destination.y = 0;
	texture_destination.w = image_width;
	texture_destination.h = image_height;

	bool running = true;
	SDL_Event event;
	//while (running)
	//{
	//	// Process events
	//	while (SDL_PollEvent(&event))
	//	{
	//		if (event.type == SDL_QUIT)
	//		{
	//			running = false;
	//		}
	//	}
	//	
	//	 //Clear screen
		SDL_RenderClear(renderer);

	//	 //Draw
		SDL_RenderCopy(renderer, image_texture, NULL, &texture_destination);

	//	 //Show what was drawn
		SDL_RenderPresent(renderer);
	//}
		SDL_Delay(1000);
	// Release resources
	SDL_DestroyTexture(image_texture);
	IMG_Quit();
	SDL_DestroyRenderer(renderer);
	SDL_DestroyWindow(window);
	SDL_Quit();
}

void read()
{
	if (index != 6) 
	{
		std::cout << "\nGuessable word: " << std::flush;
		for (int i = 0; i < word.size(); i++)
		{
			std::cout << word[i] << std::flush;
		}
	}
	else
	{
		std::cout <<"\nYou lose! Puzzled word: "<<arr[random_index] << std::endl;
	}
	
}

void check()
{
	//gh();

	read();
	sdl();
	while (arr[random_index] != word && index != 6)
	{
		//m();
		found = true;
		while (found)
		{
			found = false;
			while (true)
			{
				std::cout << "\nEnter a letter: " << std::flush;
				std::cin >> letter;

				if (isalpha(letter)) //iswalnum() setlocale(LC_ALL, "Russian");
				{
					break;
				}
				else
				{
					std::cout << "\nIncorrect input. Please enter a LETTER" << std::endl;
				}
			}
			
			if (step == 0) { input.push_back(letter); found = false; }
			else
			{
				for (int i = 0; i < input.size(); i++)
				{
					if (letter == input[i])
					{
						found = true;
					}
				}
				if (!found){ input.push_back(letter); }
				else { std::cout << "\nYou have already entered this letter. Enter another letter." << std::endl; }

			}
		}
		std::cout << "The letters you entered: " << std::flush;
		for (int i = 0; i < input.size(); i++)
		{
			if (i != 0 && i < input.size())
			{
				std::cout << ", ";
			}
			std::cout << input[i];
		}
		for (int i = 1; i < arr[random_index].size() - 1; i++)
		{
			//std::cout << arr[random_index][i] << std::endl;
			if (arr[random_index][i] == letter)
			{
				word[i] = letter;
				not_found = true;
				//std::cout << "sdss" << std::endl;
			}
		}
		//std::cout << not_found << std::endl;
		if (!not_found)
		{
			std::cout << "\nYou did not guess! Enter another letter."<< std::endl;
			index++;
		}
		else
		{
			std::cout << "\nYou guessed! The desired letter is entered." << std::endl;
		}
		//std::cout << "index="<<index << std::endl;
		if (arr[random_index] == word) { std::cout << "\nYou won! The word is guessed." << std::endl; }
		sdl();
		not_found = false; 
		//found = false;
		//system("cls");
		read();
		step++;
	}

}


int main(int argc, char** argv)
{
	srand(time(NULL));
	// Initialize SDL
	std::cout << "Game started!" << std::endl;
	ifs.open("v.txt");
	while (!ifs.eof())
	{

		ifs >> s;
		arr.push_back(s);
		//std::cout << s << std::endl; 
	}

	ifs.close();
	random_index = rand() % ((arr.size() - 1) - 0 + 1) + 0;

	std::cout << arr[random_index] << std::endl;
	word = arr[random_index];
	for (int i = 1; i < word.size() - 1; i++)
	{
		word[i] = '_';
	}


	check();
	return 0;
}

SDL_Texture* initialize_texture_from_file(const char* file_name, SDL_Renderer* renderer) {
	SDL_Surface* image = IMG_Load(file_name);
	SDL_Texture* image_texture = SDL_CreateTextureFromSurface(renderer, image);
	SDL_FreeSurface(image);
	return image_texture;
}