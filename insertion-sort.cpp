//============================================================================
// Name        : insertion-sort.cpp
// Author      : Xinyi(Kathy) Zhang
// Date        : 2/10/2015
// Copyright   : Based on Leyk's notes
// Description : Implementation of insertion sort in C++
//============================================================================

#include "sort.h"

void
InsertionSort::sort(int A[], int size)				// main entry point
{
	for(int i = 1; i < size; i++){
		int temp = A[i];

		for(int j = i-1; j >= 0 && (num_cmps++, A[j] > temp); j--){

				A[j+1] = A[j];
				A[j] = temp;
			
		}
	}
  /* Complete this function with the implementation of insertion sort algorithm 
  Record number of comparisons in variable num_cmps of class Sort
  */
}
