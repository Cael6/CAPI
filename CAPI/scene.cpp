#include "scene.h";

CScene::CScene() {
	this->Init();
}

int CScene::Init() {
	//Determine whether everything is initialized properly and should be running.
	running = true;

	//The window to be rendered
	window = NULL;

	//The surface in the window
	screen_surface = NULL;

	//Initialize SDL
	if(SDL_Init(SDL_INIT_VIDEO) < 0) {
		printf("SDL could not initialize! SDL_Error: %s\n", SDL_GetError());
		running = false;
	} else {
		//Create window
		window = SDL_CreateWindow(
			"SDL Tutorial",
			SDL_WINDOWPOS_UNDEFINED,
			SDL_WINDOWPOS_UNDEFINED,
			SCREEN_WIDTH,
			SCREEN_HEIGHT,
			SDL_WINDOW_SHOWN
		);
		if(window == NULL ) {
			printf("Window could not be created! SDL_Error: %s\n", SDL_GetError());
			running = false;
		} else {
			//Get window surface
			screen_surface = SDL_GetWindowSurface(window);
		}
	}
	return 1;
}

int CScene::CloseScene() {
	//Destroy window
	SDL_DestroyWindow(window);

	//Quit SDL subsystems
	SDL_Quit();
}

int CScene::SceneLoop() {

	//Fill the surface white
	SDL_FillRect(screen_surface, NULL, SDL_MapRGB(screen_surface->format, 0x1A, 0x2B, 0x3C));
	
	//Update the surface
	SDL_UpdateWindowSurface(window);

	//Wait two seconds
	SDL_Delay(6000);

	return 0;
}

int CScene::LoadMedia() {
	return 1;
}