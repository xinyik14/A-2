//============================================================================
// Name        : selection-sort.cpp
// Author      : Xinyi(Kathy) Zhang 
// Date        : 2/10/2015
// Copyright   : Based on Leyk's notes
// Description : Implementation of selection sort in C++
//============================================================================

#include "sort.h"
#include <iostream>

void
SelectionSort::sort(int A[], int size)				// main entry point
{
	for(int k = 0; k < size-1; k++){
		int min = A[k];
		for(int i = k+1; i < size && (num_cmps++,A[i] < min); i++){
			int temp = A[i];
			A[i] = min;
			min = temp;

		}
	}
  /* Complete this function with the implementation of selection sort algorithm 
  Record number of comparisons in variable num_cmps of class Sort
  */
}
