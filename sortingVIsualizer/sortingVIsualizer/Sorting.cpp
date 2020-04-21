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

void Sorting::merge(std::vector<int>& arr, int left, int middle, int right) {
    int p = left;
    int q = middle + 1;
    
    std::vector<int> a(right-left+1);
    int k = 0;
    
    for (int i = left; i <= right; ++i) {
        if (p > middle) {
            a[k++] = arr[q++];
        }
        
        else if (q > right) {
            a[k++] = arr[p++];
        }
        
        else if (arr[p] < arr[q]) {
            a[k++] = arr[p++];
        }
        
        else {
            a[k++] = arr[q++];
        }
    }
    
    for (int p = 0; p < k; p++) {
        arr[left++] = a[p];
    }
    return;
}

void Sorting::mergeSort(std::vector<int>& d, int l, int r, Visualizer* viz) {\
    if (l < r) {
        int m = (l + r) / 2;
        
        mergeSort(d, l, m, viz);
        
        
        mergeSort(d, m + 1, r, viz);
        
        merge(d, l, m, r);
        
        
        viz -> handleEvents(d);
        viz -> render();
    }
    return;
}

void Sorting::swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void Sorting::quickSort(std::vector<int>& d, int low, int high, Visualizer* viz) {
    if (low < high) {
        int pi = partition(d, low, high);
        quickSort(d, low, pi - 1, viz);
        quickSort(d, pi + 1, high, viz);
    }
}

int Sorting::partition(std::vector<int>&arr, int low, int high) {
    int pivot = arr[high];
    int i = low - 1;
    
    for (int j = low; j < high; ++j) {
        if (arr[j] < pivot) {
            ++i;
            swap(&arr[j], &arr[i]);
        }
    }
    
    swap(&pivot, &arr[i + 1]);
    
    return i + 1;
}
    
