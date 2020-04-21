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
    
    void merge(std::vector<int>& arr, int left, int middle, int right);
    
    void mergeSort(std::vector<int>& d, int l, int r, Visualizer* viz);
    
    void quickSort(std::vector<int>& d, int low, int high, Visualizer* viz);
    
    int partition(std::vector<int>&arr, int low, int high);
    
    void swap(int* a, int* b);
    
};

#endif /* Sorting_hpp */
