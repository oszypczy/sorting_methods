#pragma once

template <typename Iterator>
void insertionSort(Iterator first, Iterator last)
{
    if (first == last) {
        return; //if the collection is empty
    }
    for (auto i = first + 1; i != last; ++i) { //loop will iterate n-1 times (n - number of elements in collection)
        auto key = *i; //key is the value of current iterator
        auto j = i - 1; //j iterator is always smaller by 1 than i
        while (j >= first && *j > key) {
            *(j + 1) = *j;
            --j;
        } //while loop compares the value of "j" with "key", shifting the elements until it finds a suitable place where "key" can be inserted
        *(j + 1) = key; //inserts the "key" into the correct place in the already sorted part of the collection
    }
}
