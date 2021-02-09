//
// Created by urosjarc on 9. 02. 21.
//

#include <SDL_render.h>
#include "app.h"
#include "draw.h"


void draw_square(float x, float y, int width, int height) {
    SDL_Rect r;
    r.x = (int) x;
    r.y = (int) y;
    r.w = width;
    r.h = height;

    // Render rect
    SDL_SetRenderDrawColor(app_renderer, (Uint8) draw_background_colour[0], (Uint8) draw_background_colour[1], (Uint8) draw_background_colour[2], 255);
    SDL_RenderFillRect(app_renderer, &r);
    SDL_RenderPresent(app_renderer);
}

void draw_line(float x_start, float y_start, float x_end, float y_end) {
    SDL_RenderPresent(app_renderer);
}

void draw_colour(char *colour) {
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
                draw_background_colour[j] = colourValues[i][j];
            }
            break;
        }
    }
}
