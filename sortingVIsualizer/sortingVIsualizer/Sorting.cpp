//
//  Sorting.cpp
//  sortingVIsualizer
//
//  Created by Ahmad Chaudhry on 2020-04-09.
//  Copyright © 2020 Ahmad Chaudhry. All rights reserved.
//

#include "Sorting.hpp"

Sorting::Sorting() {
    
}

Sorting::~Sorting() {
    
}

void Sorting::selectionSort(std::vector<int>& d, Visualizer* viz) {
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
    
    for (int i = 0; i < d.size(); ++i) {
        std::cout << d[i] << std::endl;
    }
}
    
void Sorting::insertionSort(std::vector<int>& d, Visualizer* viz) {
    
}
    
void Sorting::bubbleSort(std::vector<int>& d, Visualizer* viz) {
    for (int i = 0; i < d.size() - 1; ++i) {
        for (int j = 0; j < d.size() - i - 1; ++j) {
            if (d[j] > d[j + 1]) {
                int temp = d[j];
                d[j] = d[j + 1];
                d[j + 1] = temp;
            }
        }
        
        viz -> handleEvents(d);
        viz -> render();
    }
    
    for (int i = 0; i < d.size(); i++) {
        std::cout << d[i] << std::endl;
    }
}
    
void Sorting::mergeSort(std::vector<int>& d, Visualizer* viz) {
    
}
    
