find_package(SDL2 REQUIRED)
include_directories(${SDL2_INCLUDE_DIRS})

include_directories(app)
include_directories(domain)

add_executable(smallsdl
        app/app.h
        app/app.c
        main.c app/draw.c app/draw.h app/utils.h)

target_link_libraries(smallsdl ${SDL2_LIBRARIES})
