#ifndef __Game__
#define __Game__
#include <SDL2/SDL.h>
#include <iostream>
#include <SDL2/SDL_image.h>
class Game {
public:
    void setSpeedFactor(float speedFactor);


    Game();

    ~Game();


    bool init(const char* title, int xpos, int ypos, int width, int
    height, int flags);

    void render();

    void update();

    void handleEvents();

    void clean();

    bool running() { return m_bRunning; }

private:
    float m_speedFactor;
    float m_speedX; // Скорость по оси X
    float m_speedY; // Скорость по оси Y
    float m_scale;  // Масштаб
    SDL_Window *m_pWindow;
    SDL_Renderer *m_pRenderer;
    bool m_bRunning;

    float waterfallX=1400;
    float waterfallY=-200;
    SDL_Texture* m_pTextureWaterfall;
    SDL_Rect m_sourceRectangleWaterfall;      
    SDL_Rect m_destinationRectangleWaterfall; 


    float BushX=-100;
    float BushY=550;
    SDL_Texture* m_pTextureBush;
    SDL_Rect m_sourceRectangleBush;      
    SDL_Rect m_destinationRectangleBush;


    float ParrotX=1520;
    float ParrotY=0;
    float ParrotXvector;
    float ParrotYvector;
    float distanceParrot;
    SDL_Texture* m_pTextureParrot;
    SDL_Rect m_sourceRectangleParrot;      
    SDL_Rect m_destinationRectangleParrot;
    bool m_renderParrot=true;

    float LionX=100;
    float LionY=400;
    float LionXvector;
    float LionYvector;
    float distanceLion;
    SDL_Texture* m_pTextureLion;
    SDL_Rect m_sourceRectangleLion;      
    SDL_Rect m_destinationRectangleLion;
    bool m_renderLion=true;

    float CatX=100;
    float CatY=200;
    float CatXvector;
    float CatYvector;
    float distanceCat;
    SDL_Texture* m_pTextureCat;
    SDL_Rect m_sourceRectangleCat;      
    SDL_Rect m_destinationRectangleCat;
    bool m_renderCat=true;

    SDL_Texture* m_pTextureExit;
    SDL_Rect m_sourceRectangleExit;      
    SDL_Rect m_destinationRectangleExit;


    SDL_Texture* m_pTextureAddCat;
    SDL_Rect m_sourceRectangleAddCat;      
    SDL_Rect m_destinationRectangleAddCat;

    SDL_Texture* m_pTextureDelCat;
    SDL_Rect m_sourceRectangleDelCat;      
    SDL_Rect m_destinationRectangleDelCat;

    SDL_Texture* m_pTextureAddLion;
    SDL_Rect m_sourceRectangleAddLion;      
    SDL_Rect m_destinationRectangleAddLion;


    SDL_Texture* m_pTextureDelLion;
    SDL_Rect m_sourceRectangleDelLion;      
    SDL_Rect m_destinationRectangleDelLion;


    SDL_Texture* m_pTextureAddParrot;
    SDL_Rect m_sourceRectangleAddParrot;      
    SDL_Rect m_destinationRectangleAddParrot;


    SDL_Texture* m_pTextureDelParrot;
    SDL_Rect m_sourceRectangleDelParrot;      
    SDL_Rect m_destinationRectangleDelParrot;
    

};




#endif
