#pragma once
#include <SDL.h>
#include <stdio.h>

class Display
{
public:
	Display(char const* title, int windowWidth, int windowHeight, int textureWidth, int textureHeight);


	~Display();

	void Update(void const* buffer, int pitch);



private:
	SDL_Window* window{};
	SDL_Renderer* renderer{};
	SDL_Texture* texture{};
};

