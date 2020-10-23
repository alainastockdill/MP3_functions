#include <iostream>
using namespace std;

#ifndef sort_h
#define sort_h

class Sort {
private: 
    int size;
    int[] Array;


public:
    //Constructor for Sort
    //The parameter is an array to be sorted 
    Sort(int [] arr);

    //Sets the size of the array
    void setSize();
    
    //Uses selection sort to sort the array
    //Input: N/A
    //Output: sorted array
    int [] selectionSort();

    //Uses bubble sort to sort the array
    //Input: N/A
    //Output: sorted array
    int [] bubbleSort();


    //Merges two sorted arrays together by comparing elements
    //Input: two arrays to merge and one array to put elements into
    //Output: one sorted array made from the two halves
    int [] merge(int left, int right, int arr[]);

    //Uses merge sort to sort the array
    //Input: N/A
    //Output: sorted array
    int [] mergeSort();

}

#endif