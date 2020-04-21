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
#include "Sorting.hpp";

int main() {
    
    DataBuilder data(200);
    Sorting sorter;
    
    std::vector<int> d = data.getData();
    
    Visualizer* viz = new Visualizer();
    
    viz -> init("Sorting Viz", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 800, 600, false);
    bool sorted = false;
    
    while (viz -> running()) {
        //viz -> handleEvents(data.getData());
        if (!sorted) {
            sorter.mergeSort(d, 0, d.size() - 1, viz);
            
            viz -> handleEvents(d);
            viz -> render();
            for (int& elem: d) {
                std::cout << elem << std::endl;
            }
            
            viz -> render();
            sorted = true;
        }
    }
    
    viz -> clean();
}
