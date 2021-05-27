#pragma once
#include <iostream>

template<class T>
void insertionSort(T arr[], size_t sz)
{
    for (size_t i = 1; i < sz; i++)
    {
        T key = arr[i];
        size_t j = i - 1;

        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}
