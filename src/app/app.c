//
// Created by urosjarc on 9. 02. 21.
//

#include <SDL.h>
#include "app.h"
#include "draw.h"
#include <stdbool.h>

bool app_new(int width, int height) {
    bool success = true;
    //Initialize SDL
    if (SDL_Init(SDL_INIT_VIDEO) < 0) {
        printf("SDL could not initialize! SDL_Error: %s\n", SDL_GetError());
        success = false;
    } else {
        //Create window
        app_window = SDL_CreateWindow("SDL Tutorial", 0, 0, width, height, SDL_WINDOW_SHOWN);
        if (app_window == NULL) {
            printf("Window could not be created! SDL_Error: %s\n", SDL_GetError());
            success = false;
        } else {
            //Get window surface
            app_renderer = SDL_CreateRenderer(app_window, -1, SDL_RENDERER_ACCELERATED);
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
    SDL_SetRenderDrawColor(app_renderer, app_background_colour[0], app_background_colour[1], app_background_colour[2], 255);
    SDL_RenderClear(app_renderer);
    app_wait(16);
    SDL_SetRenderDrawColor(app_renderer, draw_background_colour[0], draw_background_colour[1], draw_background_colour[2], 255);
    return true;
}


void app_background(char *colour) {
    char *colours[] = {
            "black", "white", "red", "lime", "blue", "yellow", "cyan", "magenta", "silver", "gray", "maroon", "olive",
            "green", "purple", "teal", "navy",
    };

    int colourValues[][3] = {
            {0,   0,   0},
            {255, 255, 255},
            {255, 0,   0},
            {0,   255, 0},
            {0,   0,   255},
            {255, 255, 0},
            {0,   255, 255},
            {255, 0,   255},
            {192, 192, 192},
            {128, 128, 128},
            {128, 0,   0},
            {128, 128, 0},
            {0,   128, 0},
            {128, 0,   128},
            {0,   128, 128},
            {0,   0,   128}
    };

    for (int i = 0; i < 16; ++i) {
        if (strcmp(colour, colours[i]) == 0) {
            for (int j = 0; j < 3; ++j) {
                app_background_colour[j] = colourValues[i][j];
            }
            break;
        }
    }
}


bool app_close() {
    SDL_DestroyWindow(app_window);

    SDL_DestroyRenderer(app_renderer);

    //Quit SDL subsystems
    SDL_Quit();

}

void app_wait(int miliseconds) {
    SDL_Delay(16);
}



