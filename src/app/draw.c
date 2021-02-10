//
// Created by urosjarc on 9. 02. 21.
//

#include <SDL_render.h>
#include "app.h"
#include "draw.h"


void draw_square(float x, float y, float width, float height) {
    SDL_Rect r;
    r.x = (int) x;
    r.y = (int) y;
    r.w = width;
    r.h = height;

    // Render rect
    SDL_SetRenderDrawColor(APP_RENDERER, (Uint8) DRAW_COLOUR.value[0], (Uint8) DRAW_COLOUR.value[1], (Uint8) DRAW_COLOUR.value[2], 255);
    SDL_RenderFillRect(APP_RENDERER, &r);
}

void draw_line(float x_start, float y_start, float x_end, float y_end) {
    SDL_RenderDrawLine(APP_RENDERER, (int) x_start, (int) y_start, (int) x_end, (int) y_end);
}

void draw_colour(char *colour) {
    for (int i = 0; i < UTILS_LEN(UTILS_COLOURS); ++i) {
        Colour colourS = UTILS_COLOURS[i];
        if (strcmp(colourS.name, colour) == 0) {
            DRAW_COLOUR = colourS;
            break;
        }
    }
}
