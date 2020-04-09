//
//  Sorting.hpp
//  sortingVIsualizer
//
//  Created by Ahmad Chaudhry on 2020-04-09.
//  Copyright © 2020 Ahmad Chaudhry. All rights reserved.
//

#ifndef Sorting_hpp
#define Sorting_hpp

#include <stdio.h>
#include <vector>
#include <iostream>
#include "Visualizer.hpp"

class Sorting {
public:
    Sorting();
    
    ~Sorting();
    
    void selectionSort(std::vector<int>& d, Visualizer* viz);
    
    void insertionSort(std::vector<int>& d, Visualizer* viz);
    
    void bubbleSort(std::vector<int>& d, Visualizer* viz);
    
    void mergeSort(std::vector<int>& d, Visualizer* viz);
    
};

#endif /* Sorting_hpp */
