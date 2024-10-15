//
//  main.cpp
//  Smart Pointers
//
//  Created by Andrea d Cazares on 10/14/24.
//



    
#include <iostream>
#include <memory>
#include "./getAnswers.hpp"
#include "./expand.hpp"
#include "./globalVariable.hpp"
#include "./sum.hpp"
#include "./printArray.hpp"
    
using namespace std;
    
    unique_ptr<int[]> expand(unique_ptr<int[]>& arr, int size, int newSize);
    unique_ptr<int[]> getAnswers();
    void printArray(const unique_ptr<int[]>& arr, int size);
    
    int main() {
        unique_ptr<int[]> numbers = getAnswers();
        
        printArray(numbers, ::size);
        int total = sumOfNumbers(numbers.get(), ::size); //  get() to access "raw pointer"
        cout << "Sum of numbers: " << total << std::endl;
        
        return 0;
    }

