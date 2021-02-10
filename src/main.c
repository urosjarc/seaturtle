#include "app.h"
#include "draw.h"


int main(int argc, char* argv[]) {

    app_new(600, 600);
    app_background("green");

    char* colours[] = {"blue", "red"};
    int posx[2] = {0, 0};
    int posy[2] = {0, 0};
    int speedx[2] = {2, 4};
    int speedy[2] = {6, 3};

    while (app_running()) {

        for (int i = 0; i < 2; ++i) {

            draw_colour(colours[i]);
            draw_square(posx[i], posy[i], 10, 10);

            posx[i] += speedx[i];
            posy[i] += speedy[i];
            if(0 > posx[i]) {
                posx[i] = 0;
                speedx[i] *= -1;
            }
            if(600 < posx[i]) {
                posx[i] = 600;
                speedx[i] *= -1;
            }
            if(0 > posy[i]) {
                posy[i] = 0;
                speedy[i] *= -1;
            }
            if(600 < posy[i]) {
                posy[i] = 600;
                speedy[i] *= -1;
            }
        }
    }

    app_close();
    return 0;
}
