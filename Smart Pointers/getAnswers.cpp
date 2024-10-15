//
//  getAnswers.cpp
//  Smart Pointers
//
//  Created by Andrea d Cazares on 10/14/24.
//


#include "./getAnswers.hpp"
#include "./globalVariable.hpp"
#include "./expand.hpp"
#include <memory>

std::unique_ptr<int[]> getAnswers() {
    std::unique_ptr<int[]> numbers = std::make_unique<int[]>(1);
    int currentAllocatedSize = 1;

    while (true) {
        int userNumbers;
        std::cout << "Enter a number: " << std::endl;
        std::cout << "Or type 0 to stop" << std::endl;
        std::cin >> userNumbers;

        if (userNumbers == 0) {
            break;
        }

        if (size >= currentAllocatedSize) {
            numbers = expand(numbers, size, currentAllocatedSize * 2);
            currentAllocatedSize *= 2;
        }

        numbers[size] = userNumbers;
        size++;
    }

    return numbers;
}
