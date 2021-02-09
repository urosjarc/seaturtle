//
// Created by urosjarc on 9. 02. 21.
//

#include <SDL_render.h>
#include "app.h"

void draw_square(float x, float y, int width, int height) {
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
