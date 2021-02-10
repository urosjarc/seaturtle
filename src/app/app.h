//
// Created by urosjarc on 9. 02. 21.
//


#ifndef SEATURTLE_APP_H
#define SEATURTLE_APP_H

#include <stdbool.h>
#include <SDL.h>
#include "utils.h"
#include "draw.h"

SDL_Window* APP_WINDOW;
SDL_Renderer* APP_RENDERER;
static Colour APP_BACKGROUND_COLOUR;

bool app_new(int width, int height);
bool app_running();
void app_wait(int miliseconds);
void app_background(char* colour);
bool app_close();

#endif //SEATURTLE_APP_H

