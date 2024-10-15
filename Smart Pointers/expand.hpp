//
//  expand.hpp
//  Smart Pointers
//
//  Created by Andrea d Cazares on 10/14/24.
//


#ifndef expand_hpp
#define expand_hpp

#include <iostream>
#include <memory>

std::unique_ptr<int[]> expand(std::unique_ptr<int[]>& arr, int size, int newSize);

#endif /* expand_hpp */
