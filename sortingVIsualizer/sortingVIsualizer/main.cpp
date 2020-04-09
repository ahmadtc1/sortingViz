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
    std::vector<int> d = data.getData();
    
    Visualizer* viz = new Visualizer();
    
    viz -> init("Sorting Viz", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 800, 600, false);
    
    while (viz -> running()) {
        bool sorted = false;
        //viz -> handleEvents(data.getData());
        if (!sorted) {
            for (int i = 0; i < d.size(); ++i) {
                int min = d[i];
                int minIndex = i;
                
                for (int j = i + 1; j < d.size(); ++j) {
                    if (d[j] < min) {
                        min = d[j];
                        minIndex = j;
                    }
                }
                int temp = d[i];
                d[i] = min;
                d[minIndex] = temp;
                
                viz -> handleEvents(d);
                viz -> render();
            }
            
            for (int i = 0; i < data.getData().size(); ++i) {
                std::cout << data.getData()[i] << std::endl;
            }
            viz -> render();
            
            sorted = true;
        }
        
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
}
