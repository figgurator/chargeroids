#include <stdio.h>
#include <SDL/SDL.h>

const int SCREEN_WIDTH = 640;
const int SCREEN_HEIGHT = 480;

int main(int num_arguments, char* arguments[]) {

  //The window we'll be rendering to
  SDL_Window* window = NULL;

  //The surface contained by the window
  SDL_Surface* screenSurface = NULL;

  //Initialize SDL
  if(SDL_Init(SDL_INIT_VIDEO) < 0) {
      printf( "SDL could not initialize! SDL_Error: %s\n", SDL_GetError() );
  }


  return 0;
}
