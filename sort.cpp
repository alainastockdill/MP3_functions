#include <sort.h>
using namespace std;


    //Constructor for Sort
    //The parameter is an array to be sorted 
    Sort::Sort(int [] arr) {
        array[] = arr[];
    }

    //Sets the size of the array
    Sort::void setSize() {
        int arraySize = array.size;
    }
    
    //Uses selection sort to sort the array
    //Input: N/A
    //Output: sorted array
    int [] Sort::selectionSort(){
        for(int i = 0; i < array.size - 1; i++) {
            int smallest = array[1];
            for(int j = 1; j < array.size - 1; j++) {
                if(array[j] < smallest) {
                    smallest = array[j];
                    swap(array[i], array[j]);
                }
            }
        }
    }

    //Uses bubble sort to sort the array
    //Input: N/A
    //Output: sorted array
    int [] Sort::bubbleSort() {
        do {
            bool exchange_flag = false;
            for (int i = 0; i < arraySize; i++) {
                if (array[i] > array[i+1]) {
                    swap(array[i], array[i+1]);
                    exchange_flag = true;
                }
            }
            arraySize = arraySize - 1;
        } while (exchange_flag = true)
    }


    //Merges two sorted arrays together by comparing elements
    //Input: two arrays to merge and one array to put elements into
    //Output: one sorted array made from the two halves
    int [] Sort::merge(int left, int right, int arr[]) {

    }

    //Uses merge sort to sort the array
    //Input: N/A
    //Output: sorted array
    int [] Sort::mergeSort() {
        if 
    }
