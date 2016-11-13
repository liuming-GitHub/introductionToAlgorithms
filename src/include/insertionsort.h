/***************************************************************
 * AIRLIU'S ALOGRITHM IMPLEMENTATIONS
 * 
 * INSERTION SORT
 * 
 *  sort array in O(n^2) time
 *  
 **************************************************************

#ifndef ALGO_INSERTION_SORT_H__
#define ALGO_INSERTION_SORT_H__

namespace algo {
    template<typename T>
    static void insertionsort(T *array, int numberOfElement) {
        for (int i = 1; i < numberOfElement; i++) {
            T element = array[i]; 
            int j = i-1;
            while (j >= 0 && array[j] > element) { 
                array[j+1] = array[j]; 
                j = j - 1;
            } 
            array[j+1] = element;
        }   
    }
}

#endif
