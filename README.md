# Dynamic Array Handling with Smart Pointers

## Project Overview

This project shows the dynamic memory allocation in C++ using smart pointers (`std::unique_ptr`). 
It alsoreads a series of integers from the user, dynamically resizes an array when necessary, prints the array, and calculates the sum of its elements.
It is designed to prevent memory leaks by leveraging `std::unique_ptr` for automatic memory management.

## Features

- **Smart Pointers:** Uses `std::unique_ptr<int[]>` to manage dynamic arrays automatically.
- **Dynamic Array Expansion:** Dynamically grows the array size as the user inputs more numbers.
- **Global Variables:** A global variable tracks the current size of the array.
- **Memory Safety:** Ensures no manual `delete[]` calls are necessary, thanks to smart pointers.
  
## Files Included

### Source Files

- **main.cpp**
- **printArray.cpp / printArray.hpp**: Contains the function to print the array contents.
- **sum.cpp / sum.hpp**: Contains the function to calculate the sum of array elements.
- **expand.cpp / expand.hpp**: Handles the dynamic resizing of the array as needed.
- **getAnswers.cpp / getAnswers.hpp**: Implements the usage of reading user input and managing the dynamic array.
- **myGlobalVariable.cpp / myGlobalVariable.hpp**: Declares and initializes a global variable `size` to track the array's current size.

### Header Files

- **myGlobalVariable.hpp**: External declaration of the global variable `size`.
- **printArray.hpp**: Declaration of the `printArray` function.
- **sum.hpp**: Declaration of the `sumOfNumbers` function.
- **expand.hpp**: Declaration of the `expand` function.
- **getAnswers.hpp**: Declaration of the `getAnswers` function.
  ## How To Use:
- The program will ask you to enter numbers.
- Enter integers one by one.
- To stop entering numbers and see the results, type 0.
- 
 ## Example output: 
![image](https://github.com/user-attachments/assets/9c196143-9c97-43a8-b359-f4f2b938dc30)
