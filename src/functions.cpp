<<<<<<< HEAD
#include "functions.hpp"    
#include <algorithm>
#include <iostream>
#include <limits>

void print(std::vector<int> const & numbers) {
    for (long unsigned i = 0; i < numbers.size(); ++i) {
=======
#include "../inc/functions.hpp"    // TODO: add proper compilation flag and change to #include "functions.hpp"
#include <iostream>

void print(std::vector<int> const & numbers) {
    for (int i = 0; i < numbers.size(); ++i) {
>>>>>>> a6c01ef... Better code layout
        std::cout << i << ": " << numbers[i] << '\n';
    }
    std::cout << '\n';
}

void sort(std::vector<int> & unsorted) {
    std::sort(begin(unsorted), end(unsorted));
}

<<<<<<< HEAD
int min(std::vector<int> const & values) {
    int minimum = std::numeric_limits<int>::max();
    for (const auto & value : values) {
        if (value < minimum) {
            minimum = value;
        }
    }
    return minimum;
}

void reverse(std::vector<int> & data) {
    std::reverse(begin(data), end(data));
}
=======
>>>>>>> a6c01ef... Better code layout
