#pragma once
#include <algorithm>


template <typename Iterator>
void bubbleSort(Iterator first, Iterator last)
{
    if (first == last) {
        return; //if the collection is empty
    }
    bool swapped = true;
    while (swapped) {
        swapped = false;
        for (auto i = first; i != last - 1; ++i) {
            if (*(i + 1) < *i) { //if next element is bigger it swaps with the current one
                std::iter_swap(i, i + 1);
                swapped = true; //if no swap was made algorithm will end at the end of this iteration
            }
        }
        --last; //after each iteration the collection is shortened by 1 (we know the biggest "bubble" is at the end)
    }
}