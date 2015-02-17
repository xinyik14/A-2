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
    
    for (int k = 0; k < size-1; k++){
        int index = k;
        for (int i = k+1; i < size; i++)
            if ( ( num_cmps++, A[i] < A[index])) index = i;
        int tmp = A[k]; // swap A[k] and A[index]
        A[k] = A[index];
        A[index] = tmp;

	}
  /* Complete this function with the implementation of selection sort algorithm 
  Record number of comparisons in variable num_cmps of class Sort
  */
}
