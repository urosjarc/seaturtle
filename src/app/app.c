//
// Created by urosjarc on 9. 02. 21.
//

#include <SDL.h>
#include "app.h"
#include <stdbool.h>

SDL_Window* sdlWindow = NULL;
SDL_Renderer* sdlRenderer = NULL;

bool app_new(int width, int height) {
    bool success = true;
    //Initialize SDL
    if( SDL_Init( SDL_INIT_VIDEO ) < 0 ) {
        printf( "SDL could not initialize! SDL_Error: %s\n", SDL_GetError() );
        success = false;
    } else {
        //Create window
        sdlWindow = SDL_CreateWindow("SDL Tutorial", 0, 0, width, height, SDL_WINDOW_SHOWN );
        if(sdlWindow == NULL ) {
            printf( "Window could not be created! SDL_Error: %s\n", SDL_GetError() );
            success = false;
        } else {
            //Get window surface
            sdlRenderer = SDL_CreateRenderer(sdlWindow, -1, SDL_RENDERER_ACCELERATED);
        }
    }

    return true;
}

bool app_running(){
    SDL_Event event;
    while (SDL_PollEvent(&event) != 0) {
        //User requests quit
        if (event.type == SDL_QUIT) {
            return false;
        }
    }
    SDL_SetRenderDrawColor( sdlRenderer, 0, 0, 0, 255 );
    SDL_RenderClear( sdlRenderer );
    SDL_Delay(16);
    return true;
}


bool app_draw_square(float x, float y, int width, int height) {
    SDL_SetRenderDrawColor( sdlRenderer, 255, 255, 255, 255 );

    SDL_Rect r;
    r.x = (int) x;
    r.y = (int) y;
    r.w = width;
    r.h = height;

    // Render rect
    SDL_RenderFillRect( sdlRenderer, &r );

    // Render the rect to the screen
    SDL_RenderPresent(sdlRenderer);
}

bool app_close() {
    SDL_DestroyWindow( sdlWindow);
    sdlWindow = NULL;

    SDL_DestroyRenderer(sdlRenderer);
    sdlRenderer = NULL;

    //Quit SDL subsystems
    SDL_Quit();

}



