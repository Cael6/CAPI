#ifndef __CSCENE_H_INCLUDED__
#define __CSCENE_H_INCLUDED__ 

// class CObj;

class CScene {
	public:
		CScene();
		int Init();
		int CloseScene();
		int SceneLoop();
	private:
		int LoadMedia();
		SDL_Window* window;
		SDL_Surface* screen_surface;
		bool running;
		static const int SCREEN_WIDTH = 640;
		static const int SCREEN_HEIGHT = 480;
};
#endif