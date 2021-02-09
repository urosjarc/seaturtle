//
// Created by urosjarc on 9. 02. 21.
//

#ifndef SMALLSDL_DRAW_H
#define SMALLSDL_DRAW_H

#include <stdbool.h>

int draw_background_colour[3];

void draw_colour(char *colour);

void draw_line(float x_start, float y_start, float x_end, float y_end);
void draw_square(float x, float y, int width, int height);

#endif //SMALLSDL_DRAW_H
