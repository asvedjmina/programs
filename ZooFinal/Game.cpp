
#include "Game.h"
using namespace std;


Game::Game() {}


bool Game::init(const char *title, int xpos, int ypos, int width, int height, int flags) {

    // initializing everything needed

    if (SDL_Init(SDL_INIT_EVERYTHING) == 0) {
        std::cout << "SDL initialised successfully\n";
        // the window
        m_pWindow = SDL_CreateWindow(title, xpos, ypos,
                                     width, height, flags);
        if (m_pWindow != 0) // window init success
        {
            std::cout << "window creation success\n";
            m_pRenderer = SDL_CreateRenderer(m_pWindow, -1, 0);
            if (m_pRenderer != 0) // renderer init success
            {
                std::cout << "renderer creation success\n";
                SDL_SetRenderDrawColor(m_pRenderer, 50, 255, 255, 0);
            } else {
                std::cout << "renderer init fail\n";
                return false; // renderer init fail
            }
        } else {
            std::cout << "window init fail\n";
            return false; // window init fail
        }
    } else {
        std::cout << "SDL init fail\n";
        return false; // SDL init fail
    }
    std::cout << "everything is okey\n";

    SDL_Surface* pTempSurfaceWaterfall;
    pTempSurfaceWaterfall=IMG_Load("assets/waterfall.png");

    SDL_Surface* pTempSurfaceBush;
    pTempSurfaceBush=IMG_Load("assets/bush.png");

    SDL_Surface* pTempSurfaceParrot;
    pTempSurfaceParrot=IMG_Load("assets/parrot.png");

    SDL_Surface* pTempSurfaceLion;
    pTempSurfaceLion=IMG_Load("assets/lion.png");

    SDL_Surface* pTempSurfaceCat;
    pTempSurfaceCat=IMG_Load("assets/cat.png");

    SDL_Surface* pTempSurfaceExit;
    pTempSurfaceExit=IMG_Load("assets/exit.png");

    SDL_Surface* pTempSurfaceAddCat;
    pTempSurfaceAddCat=IMG_Load("assets/addCat.png");

    SDL_Surface* pTempSurfaceDelCat;
    pTempSurfaceDelCat=IMG_Load("assets/delCat.png");
    
    SDL_Surface* pTempSurfaceAddLion;
    pTempSurfaceAddLion=IMG_Load("assets/addLion.png");

    SDL_Surface* pTempSurfaceDelLion;
    pTempSurfaceDelLion=IMG_Load("assets/delLion.png");

    SDL_Surface* pTempSurfaceAddParrot;
    pTempSurfaceAddParrot=IMG_Load("assets/addParrot.png");

    SDL_Surface* pTempSurfaceDelParrot;
    pTempSurfaceDelParrot=IMG_Load("assets/delParrot.png");

    


    if (!pTempSurfaceWaterfall or !pTempSurfaceBush or !pTempSurfaceParrot or !pTempSurfaceLion or !pTempSurfaceCat or !pTempSurfaceExit or !pTempSurfaceAddCat
    or !pTempSurfaceDelCat or !pTempSurfaceAddLion or !pTempSurfaceDelLion or !pTempSurfaceAddParrot or !pTempSurfaceDelParrot) { 
        
        fprintf(stderr, "Error while loading pictures: %s\n", IMG_GetError());
        SDL_Quit(); 
        return 1; 
    
    }


    m_pTextureWaterfall = SDL_CreateTextureFromSurface(m_pRenderer, pTempSurfaceWaterfall);
    m_pTextureBush = SDL_CreateTextureFromSurface(m_pRenderer, pTempSurfaceBush);
    m_pTextureParrot = SDL_CreateTextureFromSurface(m_pRenderer, pTempSurfaceParrot);
    m_pTextureLion = SDL_CreateTextureFromSurface(m_pRenderer, pTempSurfaceLion);
    m_pTextureCat = SDL_CreateTextureFromSurface(m_pRenderer, pTempSurfaceCat);
    m_pTextureExit = SDL_CreateTextureFromSurface(m_pRenderer, pTempSurfaceExit);
    m_pTextureAddCat = SDL_CreateTextureFromSurface(m_pRenderer, pTempSurfaceAddCat);
    m_pTextureDelCat = SDL_CreateTextureFromSurface(m_pRenderer, pTempSurfaceDelCat);
    m_pTextureAddLion = SDL_CreateTextureFromSurface(m_pRenderer, pTempSurfaceAddLion);
    m_pTextureDelLion = SDL_CreateTextureFromSurface(m_pRenderer, pTempSurfaceDelLion);
    m_pTextureAddParrot = SDL_CreateTextureFromSurface(m_pRenderer, pTempSurfaceAddParrot);
    m_pTextureDelParrot = SDL_CreateTextureFromSurface(m_pRenderer, pTempSurfaceDelParrot);
    
    
    
    
    SDL_FreeSurface(pTempSurfaceWaterfall);
    SDL_FreeSurface(pTempSurfaceBush);
    SDL_FreeSurface(pTempSurfaceParrot);
    SDL_FreeSurface(pTempSurfaceLion);
    SDL_FreeSurface(pTempSurfaceCat);
    SDL_FreeSurface(pTempSurfaceExit);
    SDL_FreeSurface(pTempSurfaceAddCat);
    SDL_FreeSurface(pTempSurfaceDelCat);
    SDL_FreeSurface(pTempSurfaceAddLion);
    SDL_FreeSurface(pTempSurfaceDelLion);
    SDL_FreeSurface(pTempSurfaceAddParrot);
    SDL_FreeSurface(pTempSurfaceDelParrot);
    
    
    SDL_QueryTexture(m_pTextureWaterfall, NULL, NULL,
                &m_sourceRectangleWaterfall.w, &m_sourceRectangleWaterfall.h);
    SDL_QueryTexture(m_pTextureBush, NULL, NULL,
                &m_sourceRectangleBush.w, &m_sourceRectangleBush.h);
    SDL_QueryTexture(m_pTextureParrot, NULL, NULL,
                &m_sourceRectangleParrot.w, &m_sourceRectangleParrot.h);
    SDL_QueryTexture(m_pTextureLion, NULL, NULL,
                &m_sourceRectangleLion.w, &m_sourceRectangleLion.h);
    SDL_QueryTexture(m_pTextureCat, NULL, NULL,
                &m_sourceRectangleCat.w, &m_sourceRectangleCat.h);
    SDL_QueryTexture(m_pTextureExit, NULL, NULL,
                &m_sourceRectangleExit.w, &m_sourceRectangleExit.h);
    SDL_QueryTexture(m_pTextureAddCat, NULL, NULL,
                &m_sourceRectangleAddCat.w, &m_sourceRectangleAddCat.h);
    SDL_QueryTexture(m_pTextureDelCat, NULL, NULL,
                &m_sourceRectangleDelCat.w, &m_sourceRectangleDelCat.h);
    SDL_QueryTexture(m_pTextureAddLion, NULL, NULL,
                &m_sourceRectangleAddLion.w, &m_sourceRectangleAddLion.h);
    SDL_QueryTexture(m_pTextureDelLion, NULL, NULL,
                &m_sourceRectangleDelLion.w, &m_sourceRectangleDelLion.h);
    SDL_QueryTexture(m_pTextureAddParrot, NULL, NULL,
                &m_sourceRectangleAddParrot.w, &m_sourceRectangleAddParrot.h);
    SDL_QueryTexture(m_pTextureDelParrot, NULL, NULL,
                &m_sourceRectangleDelParrot.w, &m_sourceRectangleDelParrot.h);
    
    
    

    m_destinationRectangleWaterfall.x = waterfallX; 
    m_destinationRectangleWaterfall.y = waterfallY; 
    m_destinationRectangleWaterfall.w = static_cast<int>(m_sourceRectangleWaterfall.w *0.2);
    m_destinationRectangleWaterfall.h = static_cast<int>(m_sourceRectangleWaterfall.h *0.2);

    m_destinationRectangleBush.x = BushX; 
    m_destinationRectangleBush.y = BushY; 
    m_destinationRectangleBush.w = static_cast<int>(m_sourceRectangleBush.w*0.5);
    m_destinationRectangleBush.h = static_cast<int>(m_sourceRectangleBush.h*0.5);

    m_destinationRectangleParrot.x =1720-static_cast<int>(m_sourceRectangleParrot.w*0.2);;
    m_destinationRectangleParrot.y = m_sourceRectangleParrot.y=0;
    m_destinationRectangleParrot.w = m_sourceRectangleParrot.w;
    m_destinationRectangleParrot.h = m_sourceRectangleParrot.h;

    m_destinationRectangleLion.x = m_sourceRectangleLion.x=0;
    m_destinationRectangleLion.y = m_sourceRectangleLion.y=0;
    m_destinationRectangleLion.w = m_sourceRectangleLion.w;
    m_destinationRectangleLion.h = m_sourceRectangleLion.h;

    m_destinationRectangleCat.x = m_sourceRectangleCat.x=0;
    m_destinationRectangleCat.y = m_sourceRectangleCat.y=0;
    m_destinationRectangleCat.w = m_sourceRectangleCat.w;
    m_destinationRectangleCat.h = m_sourceRectangleCat.h;

    m_destinationRectangleExit.x =1670;
    m_destinationRectangleExit.y =980;
    m_destinationRectangleExit.w = m_sourceRectangleExit.w;
    m_destinationRectangleExit.h = m_sourceRectangleExit.h;

    m_destinationRectangleAddCat.x =0;
    m_destinationRectangleAddCat.y =980;
    m_destinationRectangleAddCat.w = m_sourceRectangleAddCat.w;
    m_destinationRectangleAddCat.h = m_sourceRectangleAddCat.h;

    m_destinationRectangleDelCat.x =250;
    m_destinationRectangleDelCat.y =980;
    m_destinationRectangleDelCat.w = m_sourceRectangleDelCat.w;
    m_destinationRectangleDelCat.h = m_sourceRectangleDelCat.h;

    m_destinationRectangleAddLion.x =500;
    m_destinationRectangleAddLion.y =980;
    m_destinationRectangleAddLion.w = m_sourceRectangleAddLion.w;
    m_destinationRectangleAddLion.h = m_sourceRectangleAddLion.h;

    m_destinationRectangleDelLion.x =750;
    m_destinationRectangleDelLion.y =980;
    m_destinationRectangleDelLion.w = m_sourceRectangleDelLion.w;
    m_destinationRectangleDelLion.h = m_sourceRectangleDelLion.h;

    m_destinationRectangleAddParrot.x =1000;
    m_destinationRectangleAddParrot.y =980;
    m_destinationRectangleAddParrot.w = m_sourceRectangleAddParrot.w;
    m_destinationRectangleAddParrot.h = m_sourceRectangleAddParrot.h;

    m_destinationRectangleDelParrot.x =1250;
    m_destinationRectangleDelParrot.y =980;
    m_destinationRectangleDelParrot.w = m_sourceRectangleDelParrot.w;
    m_destinationRectangleDelParrot.h = m_sourceRectangleDelParrot.h;
    

    m_bRunning = true; // everything inited successfully start the main loop
    return true;


}

void Game::setSpeedFactor(float speedFactor) {
    m_speedFactor = speedFactor;
}

void Game::render() {
    

    SDL_RenderClear(m_pRenderer);

    SDL_RenderCopyEx(m_pRenderer, m_pTextureWaterfall, &m_sourceRectangleWaterfall, &m_destinationRectangleWaterfall, 0, 0, SDL_FLIP_NONE);

    SDL_RenderCopyEx(m_pRenderer, m_pTextureBush, &m_sourceRectangleBush, &m_destinationRectangleBush, 0, 0, SDL_FLIP_NONE);

    if (m_renderParrot){
    SDL_RenderCopyEx(m_pRenderer, m_pTextureParrot, &m_sourceRectangleParrot, &m_destinationRectangleParrot, 0, 0, SDL_FLIP_NONE);
    }

    if (m_renderLion){
    SDL_RenderCopyEx(m_pRenderer, m_pTextureLion, &m_sourceRectangleLion, &m_destinationRectangleLion, 0, 0, SDL_FLIP_NONE);
    }

    if (m_renderCat){
    SDL_RenderCopyEx(m_pRenderer, m_pTextureCat, &m_sourceRectangleCat, &m_destinationRectangleCat, 0, 0, SDL_FLIP_NONE);
    }

    SDL_RenderCopyEx(m_pRenderer, m_pTextureExit, &m_sourceRectangleExit, &m_destinationRectangleExit, 0, 0, SDL_FLIP_NONE);

    SDL_RenderCopyEx(m_pRenderer, m_pTextureAddCat, &m_sourceRectangleAddCat, &m_destinationRectangleAddCat, 0, 0, SDL_FLIP_NONE);

    SDL_RenderCopyEx(m_pRenderer, m_pTextureDelCat, &m_sourceRectangleDelCat, &m_destinationRectangleDelCat, 0, 0, SDL_FLIP_NONE);

    SDL_RenderCopyEx(m_pRenderer, m_pTextureAddLion, &m_sourceRectangleAddLion, &m_destinationRectangleAddLion, 0, 0, SDL_FLIP_NONE);

    SDL_RenderCopyEx(m_pRenderer, m_pTextureDelLion, &m_sourceRectangleDelLion, &m_destinationRectangleDelLion, 0, 0, SDL_FLIP_NONE);

    SDL_RenderCopyEx(m_pRenderer, m_pTextureAddParrot, &m_sourceRectangleAddParrot, &m_destinationRectangleAddParrot, 0, 0, SDL_FLIP_NONE);

    SDL_RenderCopyEx(m_pRenderer, m_pTextureDelParrot, &m_sourceRectangleDelParrot, &m_destinationRectangleDelParrot, 0, 0, SDL_FLIP_NONE);

    
    SDL_RenderPresent(m_pRenderer);
}


void Game::clean() {
    std::cout << "cleaning everything\n";
    SDL_DestroyWindow(m_pWindow);
    SDL_DestroyRenderer(m_pRenderer);
    SDL_Quit();
}

void Game::handleEvents() {
    SDL_Event event;
    if (SDL_PollEvent(&event)) {
        switch (event.type) {
            case SDL_QUIT:
                m_bRunning = false;
                break;
            case SDL_KEYDOWN:
                switch (event.key.keysym.sym) {
                    case SDLK_ESCAPE:
                        m_bRunning = false;
                        break;
                    default:
                        break;
                }
                break;
            case SDL_MOUSEBUTTONDOWN:{
                // whether click left
                if (event.button.button == SDL_BUTTON_LEFT) {
                    int mouseX = event.button.x;
                    int mouseY = event.button.y;

                    // whether we want to exit
                    if (mouseX >= m_destinationRectangleExit.x &&
                        mouseX <= m_destinationRectangleExit.x + m_destinationRectangleExit.w &&
                        mouseY >= m_destinationRectangleExit.y &&
                        mouseY <= m_destinationRectangleExit.y + m_destinationRectangleExit.h) {
                        m_bRunning = false;
                    }
                    // whether we want to delete a cat
                    if (mouseX >= m_destinationRectangleDelCat.x &&
                        mouseX <= m_destinationRectangleDelCat.x + m_destinationRectangleDelCat.w &&
                        mouseY >= m_destinationRectangleDelCat.y &&
                        mouseY <= m_destinationRectangleDelCat.y + m_destinationRectangleDelCat.h){
                            m_renderCat=false;
                        }
                    // whether we want to add a cat
                    if (mouseX >= m_destinationRectangleAddCat.x &&
                        mouseX <= m_destinationRectangleAddCat.x + m_destinationRectangleAddCat.w &&
                        mouseY >= m_destinationRectangleAddCat.y &&
                        mouseY <= m_destinationRectangleAddCat.y + m_destinationRectangleAddCat.h){
                            m_renderCat=true;
                        }
                    // whether we want to add a lion
                    if (mouseX >= m_destinationRectangleAddLion.x &&
                        mouseX <= m_destinationRectangleAddLion.x + m_destinationRectangleAddLion.w &&
                        mouseY >= m_destinationRectangleAddLion.y &&
                        mouseY <= m_destinationRectangleAddLion.y + m_destinationRectangleAddLion.h){
                            m_renderLion=true;
                        }
                    //whether we want to delete a lion
                    if (mouseX >= m_destinationRectangleDelLion.x &&
                        mouseX <= m_destinationRectangleDelLion.x + m_destinationRectangleDelLion.w &&
                        mouseY >= m_destinationRectangleDelLion.y &&
                        mouseY <= m_destinationRectangleDelLion.y + m_destinationRectangleDelLion.h){
                            m_renderLion=false;
                        }
                    // whether we want to add a parrot
                    if (mouseX >= m_destinationRectangleAddParrot.x &&
                        mouseX <= m_destinationRectangleAddParrot.x + m_destinationRectangleAddParrot.w &&
                        mouseY >= m_destinationRectangleAddParrot.y &&
                        mouseY <= m_destinationRectangleAddParrot.y + m_destinationRectangleAddParrot.h){
                            m_renderParrot=true;
                        }
                    // whether we want to delete a parrot
                    if (mouseX >= m_destinationRectangleDelParrot.x &&
                        mouseX <= m_destinationRectangleDelParrot.x + m_destinationRectangleDelParrot.w &&
                        mouseY >= m_destinationRectangleDelParrot.y &&
                        mouseY <= m_destinationRectangleDelParrot.y + m_destinationRectangleDelParrot.h){
                            m_renderParrot=false;
                        }  
                }
                break;
            }
            default:
                break;
                
        }
    }
}
    
void Game::update() {

//moving a parrot

    ParrotXvector=150-ParrotX;
    ParrotYvector=500-ParrotY;
    distanceParrot=hypot(ParrotXvector, ParrotYvector);
    if(distanceParrot!=0){
        ParrotXvector/=distanceParrot;
        ParrotYvector/=distanceParrot;
    }
    ParrotX+=m_speedFactor*ParrotXvector;
    ParrotY+=m_speedFactor*ParrotYvector;


    m_destinationRectangleParrot.x=ParrotX;
    m_destinationRectangleParrot.y=ParrotY;
    m_destinationRectangleParrot.w = static_cast<int>(m_sourceRectangleParrot.w*0.2);
    m_destinationRectangleParrot.h = static_cast<int>(m_sourceRectangleParrot.h*0.2);

    
//moving a lion

    LionXvector=1400-LionX;
    LionYvector=700-LionY;
    distanceLion=hypot(LionXvector, LionYvector);
    if(distanceParrot!=0){
        LionXvector/=distanceLion;
        LionYvector/=distanceLion;
    }
    LionX+=m_speedFactor*LionXvector;
    LionY+=m_speedFactor*LionYvector;

    m_destinationRectangleLion.x=LionX;
    m_destinationRectangleLion.y=LionY;
    m_destinationRectangleLion.w = static_cast<int>(m_sourceRectangleLion.w*0.3);
    m_destinationRectangleLion.h = static_cast<int>(m_sourceRectangleLion.h*0.3);



//moving a cat

    CatXvector=1400-LionX;
    CatYvector=700-LionY;
    distanceCat=hypot(CatXvector, CatYvector);
    if(distanceParrot!=0){
        CatXvector/=distanceCat;
        CatYvector/=distanceCat;
    }
    CatX+=m_speedFactor*CatXvector;
    CatY+=m_speedFactor*CatYvector;

    m_destinationRectangleCat.x=CatX;
    m_destinationRectangleCat.y=CatY;
    m_destinationRectangleCat.w = static_cast<int>(m_sourceRectangleCat.w*0.15);
    m_destinationRectangleCat.h = static_cast<int>(m_sourceRectangleCat.h*0.15);



}

