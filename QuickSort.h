#pragma once
#include <algorithm>

template <typename Iterator>
Iterator partition(Iterator first, Iterator last, Iterator pivot) {
    auto pivotValue = *pivot;
    std::iter_swap(pivot, last - 1);
    Iterator newPivot = first;
    for (auto it = first; it != last - 1; ++it) {
        if (*it < pivotValue) {
            std::iter_swap(it, newPivot);
            ++newPivot;
        }
    }
    std::iter_swap(newPivot, last - 1);
    return newPivot;
}

template <typename Iterator>
void quickSort(Iterator first, Iterator last) {
    if (std::distance(first, last) < 2) {
        return;
    }
    auto pivot = std::next(first, std::distance(first, last) / 2);
    auto newPivot = partition(first, last, pivot);
    quickSort(first, newPivot);
    quickSort(newPivot + 1, last);
}