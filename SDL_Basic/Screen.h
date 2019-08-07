#ifndef SCREEN_H
#define SCREEN_H
#include<SDL.h>

namespace particleNamSp {

	class Screen {
	public:
		const static int SCREEN_HEIGHT = 700;
		const static int SCREEN_WIDTH = 900;
	private:
		SDL_Window *m_window;
		SDL_Renderer *m_renderer;
		SDL_Texture *m_texture;
		Uint32 *m_buffer;
	public:
		Screen();
		bool init();
		void update();
		void setPixel(int x, int y, Uint8 red, Uint8 green, Uint8 blue);
		bool processEvents();
		void close();	
		void clear();
	};
}


#endif
