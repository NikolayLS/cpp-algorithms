#pragma once
#include <iostream>


template<typename T>
size_t binarySearch(const T arr[], size_t sz, const T& element)
{
	if(!sz) throw std::logic_error("Empty array");
	if (sz == 1)
	{
		if (arr[0] == element)return 0;
		else throw std::logic_error("Element not found");
	}
	size_t left = 0;
	size_t right = sz - 1;

	while (left <= right)
	{
		size_t mid = (left + right) / 2;
		if (arr[mid] == element) return mid;
		else if (arr[mid] > element) right = mid-1;
		else left = mid+1;
	}
	throw std::logic_error("Element not found123");
}
