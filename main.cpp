#include "Game.h"
#include "Potato.h"

#include <iostream>
#include <raylib.h>
#include <sstream>

#if defined(PLATFORM_WEB)
    #include <emscripten/emscripten.h>
#endif


void UpdateDrawFrame()
{
    Game::Update();

    BeginDrawing();

    ClearBackground(RAYWHITE);

    Game::Draw();

    EndDrawing();
}

int main(void)
{
    Game::Init();
    
    #if defined(PLATFORM_WEB)
        emscripten_set_main_loop(UpdateDrawFrame, 0, 1);
    #else
        SetTargetFPS(60);   // Set our game to run at 60 frames-per-second
        //--------------------------------------------------------------------------------------

        // Main game loop
        while (!WindowShouldClose())    // Detect window close button or ESC key
        {
            UpdateDrawFrame();
        }
    #endif
}