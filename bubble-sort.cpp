//============================================================================
// Name        : bubble-sort.cpp
// Author      : Xinyi(Kathy) Zhang
// Date        : 2/10/2015
// Copyright   : Based on Leyk's notes
// Description : Implementation of bubble sort in C++
//============================================================================

#include "sort.h"

void 
BubbleSort::sort(int A[], int size)			// main entry point
{
 	for(int k = 1; k<size; k++){
 		bool cont = false;
 		for(int i = 0; i<size-k; i++){
 			if((num_cmps++, A[i]>A[i+1])){
 				int temp = A[i+1];
 				A[i+1] = A[i];
 				A[i] = temp;
 				cont = true;
 			}
 		}
 		if (!cont) break;
 	}
  /* Complete this function with the implementation of bubble sort algorithm 
     Record number of comparisons in variable num_cmps of class Sort
  */
}
