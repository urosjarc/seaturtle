//
// Created by urosjarc on 10. 02. 21.
//

#ifndef SMALLSDL_UTILS_H
#define SMALLSDL_UTILS_H

#define UTILS_LEN(a) (sizeof(a) / sizeof(*a))

typedef struct Colour {
    char *name;
    int value[3];
} Colour;


static Colour UTILS_COLOURS[] = {
        {.name="black", .value={0, 0, 0}},
        {.name="white", .value={255, 255, 255}},
        {.name="red", .value={255, 0, 0}},
        {.name="lime", .value={0, 255, 0}},
        {.name="blue", .value={0, 0, 255}},
        {.name="yellow", .value={255, 255, 0}},
        {.name="cyan", .value={0, 255, 255}},
        {.name="magenta", .value={255, 0, 255}},
        {.name="silver", .value={192, 192, 192}},
        {.name="gray", .value={128, 128, 128}},
        {.name="maroon", .value={128, 0, 0}},
        {.name="olive", .value={128, 128, 0}},
        {.name="green", .value={0, 128, 0}},
        {.name="purple", .value={128, 0, 128}},
        {.name="teal", .value={0, 128, 128}},
        {.name="navy", .value={0, 0, 128}},
};

#endif //SMALLSDL_UTILS_H

