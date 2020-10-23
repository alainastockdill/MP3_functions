#include <iostream>
#include <time.h>
#include <chrono>
using namespace std;
using namespace std::chrono;

void int [] selectionSort(int array) {
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

void int [] bubbleSort(int array) {
    arraySize = array.size();
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

void int [] merge(int [] left, int [] right, int [] array) {
    int currentLeft = left[0];
    int currentRight = right[0];
    for (int i = 0; i < array.size(); i++ ) {
        if (currentLeft < currentRight) {
            array[i] = currentLeft;
            currentLeft = left[++]; //I think this doesnt work
        } else {
            array[i] = currentRight;
            currentRight = right[++];
        }
    }
}

void int [] mergeSort(int [] array) {
    if (array.size() = 1) {
        return 0;
    } else {
        int leftSize = array.size() / 2;
        int rightSize = array.size() - leftSize;
        int left[leftSize];
        int right[rightSize];
        for (int i = 0; i < leftSize; i ++) {
            left[i] = array[i];
        }
        for (int i = leftSize; i < array.size(); i++) {
            right[i] = array[i];
        }
        mergeSort(left[]);
        mergeSort(right[]);

        merge(left[], right[], array[]);
    }
}

int [] randArray () {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    
    srand(time(NULL));

    int array[size];
    for (int i = 0; i < size; i++) {
        array[i] = rand () % 100;
    }

    return array[];
}

int main() {

    auto start = high_resolution_clock::now();
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop-start);

    return 0;
}



/*//Psuedo code for selection sort
for (int i = 0; int i < N - 1; i++)
    smallest = array[i];
    for (int j = i + 1; j < N - 1 j++)
        if (array[j] > smallest) 
            smallest = array[j]
    Swap item[i] with item[smallest]


//Pseudo code for bubble sort
do (
    exchange flag = false
    for (each pair in the array)
        if (values are out of order)
            swap the values
            exchange flag = true
        endif
    endfor
    arraysize = arraysize - 1; //makes sure the largest value stays where it is
)   while (exchange flag is true)


while (exchange flag is true) {
    exchange flag = false
    for (each pair in the array)
        if (values are out of order)
            swap the values
            exchange flag = true
        endif
    endfor
    arraysize = arraysize - 1; //makes sure the largest value stays where it is
}


//Pseudo code for merge sort
while(neighter sequence is finished) {
    set a "current item" in each sequence
    if current item in sequence 1 > current item in sequence 2
        copy smaller item to output
        increase index of sequence with smaller item
    }*/