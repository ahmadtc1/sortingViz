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
#include "Visualizer.hpp";

int main() {
    
    DataBuilder data(200);
    
    Visualizer* viz = new Visualizer();
    
    viz -> init("Sorting Viz", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 800, 600, false);
    
    while (viz -> running()) {
        viz -> handleEvents();
        viz -> render();
    }
    
    viz -> clean();
    
    
    /*
    SDL_Init(SDL_INIT_VIDEO);
    
    SDL_Window* window = SDL_CreateWindow("Title", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 800, 600, SDL_WINDOW_SHOWN);
    
    SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, 0);
    
    SDL_SetRenderDrawColor(renderer, 255, 133, 100, 255);
    
    SDL_RenderClear(renderer);
    
    SDL_RenderPresent(renderer);
    
    SDL_SetRenderDrawColor(renderer, 0, 0, 0, 0);
    for (int i = 0; i < data.getData().size(); ++i) {
        SDL_RenderDrawLine(renderer, i, 1000, i, data.getData()[i]);
        SDL_Delay(1);
        SDL_RenderPresent(renderer);
    }
    
    //SDL_RenderPresent(renderer);
    
    
     /*
     while (sorting) {
        sort the actual data in the array item by item
        Update the graph to represent the step updated data
        Render the change in data to the display
     
        Delay until the next sort is done by some seconds so the sorting can be visualized
     
     }
     */
    
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
