//
// Created by urosjarc on 9. 02. 21.
//


#ifndef SEATURTLE_APP_H
#define SEATURTLE_APP_H

#include <stdbool.h>

bool app_new(int width, int height);
bool app_draw_square(float x, float y, int width, int height);
bool app_running();
bool app_close();

#endif //SEATURTLE_APP_H

