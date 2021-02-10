//
// Created by urosjarc on 9. 02. 21.
//

#ifndef SMALLSDL_DRAW_H
#define SMALLSDL_DRAW_H

#include <stdbool.h>
#include "utils.h"

static Colour DRAW_COLOUR;

void draw_colour(char *colour);

void draw_line(float x_start, float y_start, float x_end, float y_end);
void draw_square(float x, float y, float width, float height);

#endif //SMALLSDL_DRAW_H
