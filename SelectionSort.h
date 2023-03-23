#pragma once

template <typename Iterator>
Iterator findMin(Iterator first, Iterator last) {
    auto min = first;
    for (auto n = first; n != last; n++) {
        if (*n < *min) {
            min = n;
        }
    }
    return min;
}


template <typename Iterator>
void selectionSort(Iterator first, Iterator last)
{
    if (first == last) {
        return; //if the collection is empty
    }
    for (auto i = first; i != last; ++i) { //for the whole collection
        auto min = findMin(i, last);  //find the smallest iterator
        std::iter_swap(i, min); //swap the smallest to the begining 
    } //next iteration will increase first iterator by 1 so at the begining there is sorted collection
}