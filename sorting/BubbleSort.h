#pragma once
#include <iostream>

template<typename T>
void bubbleSort(T arr[], size_t sz)
{
	for (size_t i = 0;i < sz - 1;i++)
		for (size_t j = 0;j < sz - i - 1;j++)
			if (arr[j] > arr[j + 1])
				std::swap(arr[j], arr[j + 1]);
}





