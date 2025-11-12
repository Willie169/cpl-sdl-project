#include <cstdio>
#include <SDL.h>
#include <SDL_image.h>
#include <SDL_mixer.h>
#include <SDL_bgi.h>
#include <graphics.h>

#include <ctime>
#include <string>
#include <iostream>

//Screen dimension constants
const int SCREEN_WIDTH = 640;
const int SCREEN_HEIGHT = 480;

int main(int argc, char*argv[])
{
//    p34 An Example with Animation

//    int x = 0, y = 0, dx = 1, dy = 1, r = 100;
//    initwindow(640, 480); // window size
//    while (1)
//    {
//    if (kbhit()) break; // a key is hit
//    x += dx; y += dy;
//    if (x < r) dx = 1; if (x >= getmaxx() - r) dx = -1;
//    if (y < r) dy = 1; if (y >= getmaxy() - r) dy = -1;
//    cleardevice(); // for redraw
//    setcolor(GREEN);
//    setfillstyle(SOLID_FILL, BLUE);
//    fillellipse(x, y, r, r);
//    refresh(); delay(10); // update screen
//    }
//    closegraph();


//    p35 Another Example with Full Screen

//    initwindow(0, 0); // full screen
//    setcolor(RED);
//    settextstyle(DEFAULT_FONT, HORIZ_DIR, 2);
//    time_t now; tm* timeinfo;
//    char buffer [80];
//    for (;;) {
//    if (kbhit()) break;
//    cleardevice();
//    time (&now); timeinfo = localtime(&now);
//    strftime(buffer, 80 ,"Now it's %I:%M:%S%p.", timeinfo);
//    outtextxy(random(getmaxx()), random(getmaxy()), buffer);
//    refresh(); delay(1000);
//    }
//    closegraph();


//    p37 A Simple Window

//    if(SDL_Init(SDL_INIT_VIDEO) < 0) return 0;
//    SDL_Window* gWindow = SDL_CreateWindow(
//
//    "SDL Tutorial",
//    SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED,
//    SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);
//
//    if(gWindow == NULL) return 0;
//    SDL_Surface* gScreenSurface = SDL_GetWindowSurface(gWindow);
//
//	   SDL_FillRect(gScreenSurface, NULL,
//    SDL_MapRGB(gScreenSurface->format, 0x77, 0xA8, 0x48));
//    SDL_UpdateWindowSurface(gWindow);
//    SDL_PumpEvents();
//    SDL_Delay(2000); // wait for 2 seconds
//    SDL_DestroyWindow(gWindow);
//    SDL_Quit();


//    p38 Loading an Image

//    if(SDL_Init(SDL_INIT_VIDEO) < 0) return 0;
//    SDL_Window* gWindow = SDL_CreateWindow(
//
//    "SDL Tutorial",
//    SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED,
//    SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);
//
//    if(gWindow == NULL) return 0;
//    SDL_Surface* gScreenSurface = SDL_GetWindowSurface(gWindow);
//    SDL_Surface *gHelloSurface = SDL_LoadBMP("./img/hello.bmp");
//    if(gHelloSurface == NULL) {
//    std::cout << "Unable to load image!"; return 0;
//    }
//
//    SDL_BlitSurface(gHelloSurface, NULL, gScreenSurface, NULL);
//    SDL_UpdateWindowSurface(gWindow);
//    SDL_Delay(2000); // wait for 2 seconds
//    SDL_FreeSurface(gHelloSurface);
//    SDL_DestroyWindow(gWindow);
//    SDL_Quit();


//    p40 Rendering an Image

//    SDL_Init(SDL_INIT_VIDEO);
//    SDL_Window* gWindow = SDL_CreateWindow("SDL Tutorial", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED,SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);
//    SDL_Renderer *gRenderer = SDL_CreateRenderer(gWindow, -1, 0);
//    SDL_Surface *gSurface = SDL_LoadBMP("./img/foo.bmp");
//    SDL_Texture *gTexture = SDL_CreateTextureFromSurface(gRenderer,
//    gSurface);
//    SDL_Rect rect = {5, 5, 320, 240};
//    SDL_RenderCopy(gRenderer, gTexture, NULL, &rect);
//    //SDL_RenderCopy(gRenderer, gTexture, NULL, NULL);
//    SDL_RenderPresent(gRenderer); SDL_Delay(2000);
//    SDL_DestroyTexture(gTexture); SDL_FreeSurface(gSurface);
//    SDL_DestroyRenderer(gRenderer); SDL_DestroyWindow(gWindow);
//    SDL_Quit();


//    p41 Animated Image

//    SDL_Init(SDL_INIT_VIDEO);
//    SDL_Window* gWindow = SDL_CreateWindow(
//    "SDL Tutorial", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED,
//    SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);
//    SDL_Renderer *gRenderer = SDL_CreateRenderer(gWindow, -1, 0);
//	SDL_Surface *gSurface = SDL_LoadBMP("./img/foo.bmp");
//    SDL_Texture *gTexture = SDL_CreateTextureFromSurface(gRenderer,gSurface);
//    SDL_SetRenderDrawColor(gRenderer, 0, 255, 255, 255);
//    SDL_Rect src[4] = {{0, 0, 64, 205}, {64, 0, 64, 205}, {128, 0, 64,
//    205}, {196, 0, 64, 205}};
//    SDL_Rect dst = {0, 200, 64, 205};
//    for (int i=0;i<100;i++) {
//    SDL_RenderClear(gRenderer);
//    SDL_RenderCopy(gRenderer, gTexture, &src[i%4], &dst);
//    SDL_RenderPresent(gRenderer); SDL_PumpEvents(); SDL_Delay(400);
//    dst.x = (dst.x + 64)%SCREEN_WIDTH;
//    }
//    SDL_DestroyTexture(gTexture); SDL_FreeSurface(gSurface);
//    SDL_DestroyRenderer(gRenderer); SDL_DestroyWindow(gWindow);
//    SDL_Quit();
}
