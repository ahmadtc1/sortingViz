//
//  dataBuilder.hpp
//  sortingVIsualizer
//
//  Created by Ahmad Chaudhry on 2020-03-27.
//  Copyright © 2020 Ahmad Chaudhry. All rights reserved.
//

#ifndef dataBuilder_hpp
#define dataBuilder_hpp

#include <stdio.h>
#include <vector>

class DataBuilder {
private:
    std::vector<int> data;
    
public:
    DataBuilder();
    
    DataBuilder(int size);
    
    void shuffle();
    
    void randomize();
    
    std::vector<int> getData();
    
};


#endif /* dataBuilder_hpp */
