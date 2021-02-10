//
// Created by urosjarc on 9. 02. 21.
//

#include <SDL.h>
#include "app.h"
#include "draw.h"
#include "utils.h"
#include <stdbool.h>


bool app_new(int width, int height) {
    bool success = true;
    //Initialize SDL
    if (SDL_Init(SDL_INIT_VIDEO) < 0) {
        printf("SDL could not initialize! SDL_Error: %s\n", SDL_GetError());
        success = false;
    } else {
        //Create window
        APP_WINDOW = SDL_CreateWindow("SDL Tutorial", 0, 0, width, height, SDL_WINDOW_SHOWN);
        if (APP_WINDOW == NULL) {
            printf("Window could not be created! SDL_Error: %s\n", SDL_GetError());
            success = false;
        } else {
            //Get window surface
            APP_RENDERER = SDL_CreateRenderer(APP_WINDOW, -1, SDL_RENDERER_ACCELERATED);
        }
    }
    app_background("white");
    draw_colour("black");
    return true;
}

bool app_running() {

    // Render the rect to the screen
    SDL_Event event;
    while (SDL_PollEvent(&event) != 0) {
        //User requests quit
        if (event.type == SDL_QUIT) {
            return false;
        }
    }
    SDL_SetRenderDrawColor(APP_RENDERER, APP_BACKGROUND_COLOUR[0], APP_BACKGROUND_COLOUR[1], APP_BACKGROUND_COLOUR[2], 255);
    SDL_RenderClear(APP_RENDERER);
    app_wait(16);
    SDL_SetRenderDrawColor(APP_RENDERER, DRAW_COLOUR[0], DRAW_COLOUR[1], DRAW_COLOUR[2], 255);
    return true;
}


void app_background(char *colour) {
    for (int i = 0; i < UTILS_LEN(UTILS_COLOURS); ++i) {
        Colour colourS = UTILS_COLOURS[i];
        if (strcmp(colourS.name, colour) == 0) {
            for (int j = 0; j < 3; ++j) {
                APP_BACKGROUND_COLOUR[j] = colourS.value[j];
            }
            break;
        }
    }
}


bool app_close() {
    SDL_DestroyWindow(APP_WINDOW);

    SDL_DestroyRenderer(APP_RENDERER);

    //Quit SDL subsystems
    SDL_Quit();

}

void app_wait(int miliseconds) {
    SDL_Delay(16);
}



