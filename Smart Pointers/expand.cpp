//
//  expand.cpp
//  Smart Pointers
//
//  Created by Andrea d Cazares on 10/14/24.
//

#include "./expand.hpp"
#include <memory>

std::unique_ptr<int[]> expand(std::unique_ptr<int[]>& arr, int size, int newSize) {
    std::unique_ptr<int[]> newArr = std::make_unique<int[]>(newSize);
    for (int i = 0; i < size; i++) {
        newArr[i] = arr[i];
    }
    return newArr;
}
