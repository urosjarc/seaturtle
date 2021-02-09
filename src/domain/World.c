//
// Created by urosjarc on 16. 12. 19.
//

#include <stdlib.h>

#include "World.h"

World world_new() {
    World self;

    self.height = 10;
    self.width = 20;


    return self;
}

