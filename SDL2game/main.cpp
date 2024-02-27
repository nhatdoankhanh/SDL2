#include <iostream>
#include <SDL.h>
#include <SDL_image.h>

using namespace std

void logErrorAndExit(const char* msg, const char* error)
{
    SDL_LogMessage(SDL_LOG_CATEGORY_APPLICATION, SDL_LOG_PRIORITY, "%s : %s", msg, error);
    SDL_Quit();
}
