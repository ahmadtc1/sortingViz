//
//  Visualizer.cpp
//  sortingVIsualizer
//
//  Created by Ahmad Chaudhry on 2020-04-01.
//  Copyright © 2020 Ahmad Chaudhry. All rights reserved.
//

#include "Visualizer.hpp"


Visualizer::Visualizer() {
    count = 0;
}

Visualizer::~Visualizer() {
    
}

void Visualizer::init(const char *title, int xpos, int ypos, int width, int height, bool fullScreen) {
    int flags = 0;
    if (fullScreen) {
        flags = SDL_WINDOW_FULLSCREEN;
    }
    if (SDL_Init(SDL_INIT_EVERYTHING) == 0) {
        std::cout << "Subsystems initialized" << std::endl;
        
        window = SDL_CreateWindow(title, xpos, ypos, width, height, flags);
        
        if (window) {
            std::cout << "Window Created." << std::endl;
        }
        
        renderer = SDL_CreateRenderer(window, -1, 0);
        if (renderer) {
            SDL_SetRenderDrawColor(renderer, 255, 133, 100, 255);
            
            std::cout << "Renderer Created" << std::endl;
            
            SDL_RenderClear(renderer);
            
            SDL_SetRenderDrawColor(renderer, 0, 0, 0, 0);
        }
        
        isRunning = true;
    }
    else {
        isRunning = false;
    }
}

void Visualizer::handleEvents() {
    std::vector<int> a;
    SDL_Event event;
    SDL_PollEvent(&event);
    switch(event.type) {
        case SDL_QUIT:
            isRunning = false;
            break;
            
        case SDL_KEYDOWN:
            update(a);
        
        case SDL_KEYUP:
            update(a);
            
        default:
            break;
    }
}

void Visualizer::update(std::vector<int> data) {
    count = count + 1;
    std::cout << count << std::endl;
    SDL_RenderDrawLine(renderer, 10, 0, 10, count);
}

void Visualizer::render() {
    //SDL_RenderClear(renderer);
    //This is where we would add the stuff to render
    SDL_RenderPresent(renderer);
}

void Visualizer::clean() {
    SDL_DestroyWindow(window);
    SDL_DestroyRenderer(renderer);
    SDL_Quit();
    std::cout << "Game Cleaned" << std::endl;
}

bool Visualizer::running() {
    return isRunning;
}
