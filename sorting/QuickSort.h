#pragma once
#include<iostream>

template<typename T>
int partition(T arr[], int low, int high)
{
    T pivot = arr[high];
    int i = (low - 1);

    for (int j = low; j <= high - 1; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            std::swap(arr[i], arr[j]);
        }
    }
    std::swap(arr[i + 1], arr[high]);
    return (i + 1);
}

template<typename T>
void quickSort_(T arr[], int low, int high)
{
    if (low < high)
    {
        int pi = partition(arr, low, high);
        quickSort_(arr, low, pi - 1);
        quickSort_(arr, pi + 1, high);
    }
}

template<typename T>
void quickSort(T arr[], int sz)
{
    quickSort_(arr, 0, sz - 1);
}
