//
//  main.cpp
//  sortingVIsualizer
//
//  Created by Ahmad Chaudhry on 2020-03-27.
//  Copyright © 2020 Ahmad Chaudhry. All rights reserved.
//

#include <iostream>
#include <SDL2/SDL.h>
#include "dataBuilder.hpp";

int main() {
    
    DataBuilder data(200);

    SDL_Init(SDL_INIT_VIDEO);
    
    SDL_Window* window = SDL_CreateWindow("Title", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 800, 600, SDL_WINDOW_SHOWN);
    
    SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, 0);
    
    SDL_SetRenderDrawColor(renderer, 255, 0, 0, 255);
    
    SDL_RenderClear(renderer);
    
    SDL_RenderPresent(renderer);
    
    SDL_SetRenderDrawColor(renderer, 0, 0, 0, 0);
    for (int i = 0; i < data.getData().size(); ++i) {
        SDL_RenderDrawLine(renderer, i, 1000, i, data.getData()[i]);
        SDL_Delay(1);
        SDL_RenderPresent(renderer);
    }
    
    //SDL_RenderPresent(renderer);
    
    SDL_Event e;
    bool quit = false;
    while (!quit){
        while (SDL_PollEvent(&e)){
            if (e.type == SDL_QUIT){
                quit = true;
            }
            if (e.type == SDL_KEYDOWN){
                quit = true;
            }
            if (e.type == SDL_MOUSEBUTTONDOWN){
                quit = true;
            }
        }
    }
}
