//
//  Visualizer.hpp
//  sortingVIsualizer
//
//  Created by Ahmad Chaudhry on 2020-04-01.
//  Copyright © 2020 Ahmad Chaudhry. All rights reserved.
//
#ifndef Visualizer_hpp
#define Visualizer_hpp

#include <stdio.h>
#include <iostream>
#include <vector>
#include <SDL2/SDL.h>
#include "dataBuilder.hpp"

class Visualizer {
private:
    SDL_Window* window;
    SDL_Renderer* renderer;
    bool isRunning;
    int count;
    
public:
    Visualizer();
    
    ~Visualizer();
    
    void init(const char* title, int xpos, int ypos, int width, int height, bool fullScreen);
    
    void render();
    
    void handleEvents(std::vector<int>& data);
    
    void update(std::vector<int>& data);
    
    void clean();
    
    bool running();
    
};

#endif /* Visualizer_hpp */
