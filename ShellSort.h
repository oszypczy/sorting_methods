#pragma once
#include <array>
#include <algorithm>
#include <cstddef>

template <typename Iterator>
void shellSort(Iterator first, Iterator last)
{
    if (first == last) { //return if empty
        return;
    }

    auto n = std::distance(first, last); //table lenght
    for (auto gap = n / 2; gap > 0; gap /= 2) { // setting gap
        for (auto i = gap + first; i != last; ++i) { // go thru pair of elements in subtable 
            auto temp = std::move(*i); // transfer 'i' value to 'temp'
            auto j = i; // i=j
                for (; j >= gap + first && temp < *(j - gap); j -= gap) { // swiping elements and iter each pair(in indistance 'gap')
                    *j = std::move(*(j - gap)); // move(swap) value from (j-gap) to j if smaller found
                }
                *j = std::move(temp); // transfer temporary value to correct place
                
        }
    }
    
}