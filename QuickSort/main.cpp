#include <iostream>

using namespace std;

void quickSort(int* array, int low, int high);

void printArray(const int* array, int size);

int main(int argc, char** argv)
{
    int array[] = { 30, 2, 112, 3, 6, 1, 2, 5, 70, 25, 26, 90 };
    int size = sizeof(array) / sizeof(int);

    printArray(array, size);
    quickSort(array, 0, size - 1);
    printArray(array, size);

    return 0;
}

// A utility function to swap two elements
void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

/* This function takes last element as pivot, places
   the pivot element at its correct position in sorted
    array, and places all smaller (smaller than pivot)
   to left of pivot and all greater elements to right
   of pivot */
int partition(int arr[], int low, int high)
{
    int pivot = arr[high]; // pivot
    int i = (low - 1);     // Index of smaller element

    for(int j = low; j <= high - 1; j++) {
        // If current element is smaller than or
        // equal to pivot
        if(arr[j] <= pivot) {
            i++; // increment index of smaller element
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

/* The main function that implements QuickSort
 arr[] --> Array to be sorted,
  low  --> Starting index,
  high  --> Ending index */
void quickSort(int arr[], int low, int high)
{
    if(low < high) {
        /* pi is partitioning index, arr[p] is now
           at right place */
        int pi = partition(arr, low, high);

        // Separately sort elements before
        // partition and after partition
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

void printArray(const int* array, int size)
{
    for(int i = 0; i < size; i++)
        cout << array[i] << " ";
    cout << endl;
}
