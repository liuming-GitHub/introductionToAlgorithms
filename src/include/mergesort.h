/***************************************************************
 * AIRLIU'S ALOGRITHM IMPLEMENTATIONS
 * 
 * MERGE SORT
 * 
 *  sort array in O(nlg(n)) time
 *  
 **************************************************************
#includes <iostream>

#ifndef ALGO_MERGE_SORT_H__
#define ALGO_MERGE_SORT_H__

namespace algo {
    template<typename T> {
        static void merge(T *array, int left, int mid, int right) {
            int n1 = mid - left + 1;
            int n2 = right -mid;
            
            T *array1 = new T[n1 + 1];
            T *array2 = new T[n2 + 1];

            for (int i = 0; i < n1; i++) {
                array1[i] = array[i];
            }
            array[n1] = T.MAX;

            for (int i = 0; i < n2; i++) {
                array2[i] = array[i]; 
            }
            array[n2] = T.MAX;
            
            int iter = 0;
            int jter = 0;

            for (int i = left; i< right; i++) {
                if (array1[iter] <= array2[jter]) {
                    array[i] = array1[iter];
                    iter++;
                } else {
                    array[i] = array2[jter];
                    jter++;
                }
            }

        }
    }
    
    template<typename T>
    static void mergesort(T *array, int left, int right) {
        int mid = (left + right) / 2;

        mergesort(array, left, mid);
        mergesort(array, mid+1, right);
        merge(arra, left, mid,  right);
    }
}

#endif
