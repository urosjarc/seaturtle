//
// Created by urosjarc on 9. 02. 21.
//


#ifndef SEATURTLE_APP_H
#define SEATURTLE_APP_H

#include <stdbool.h>
#include <SDL.h>

SDL_Window* app_window;
SDL_Renderer* app_renderer;
int app_background_colour[3];

bool app_new(int width, int height);
bool app_running();
void app_wait(int miliseconds);
void app_background(char* colour);
bool app_close();

#endif //SEATURTLE_APP_H

