#include <iostream>
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include "Game.h"

Game* g_game = 0;
int main()
{
    g_game = new Game();
    g_game->init("Zoo", 100, 100, 1200, 1980, SDL_WINDOW_FULLSCREEN);
    g_game->setSpeedFactor(1.0f);



    while(g_game->running())
    {
        g_game->handleEvents();
        g_game->update();
        g_game->render();
    }
    g_game->clean();
    return 0;
}