#pragma once
#include<iostream>

template<typename T>
void selectionSort(T arr[], size_t sz)
{
    for (size_t i = 0; i < sz - 1; i++)
    {
        T min = i;
        for (size_t j = i + 1; j < sz; j++)
            if (arr[j] < arr[min])
                min = j;
        std::swap(arr[min], arr[i]);
    }
}
