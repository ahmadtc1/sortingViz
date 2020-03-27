//
//  dataBuilder.cpp
//  sortingVIsualizer
//
//  Created by Ahmad Chaudhry on 2020-03-27.
//  Copyright © 2020 Ahmad Chaudhry. All rights reserved.
//

#include "dataBuilder.hpp"

DataBuilder::DataBuilder() {
    data.resize(0);
}


DataBuilder::DataBuilder(int size) {
    data.resize(size);
    srand(time(0));
    for (auto& element: data) {
        int value = rand() % 1000;
        element = value;
    }
}

void DataBuilder::shuffle() {
    srand(time(0));
    for (int i = 0; i < data.size(); ++i) {
        int randomIndex = rand() % data.size();
        if (randomIndex != i) {
            int temp = data[i];
            data[i] = data[randomIndex];
            data[randomIndex] = temp;
        }
    }
}

void DataBuilder::randomize() {
    srand(time(0));
    for (auto& elem : data) {
        int value = rand() % 1000;
        elem = value;
    }
}

std::vector<int> DataBuilder::getData() {
    return data;
}
