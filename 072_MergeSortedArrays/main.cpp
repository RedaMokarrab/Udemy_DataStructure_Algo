#include <iostream>
using namespace std;
int* mergeSortedArrays(int array1[], int array2[]);

int main(int argc, char** argv)
{
    int* mergedpointer { nullptr };
    int arr1[] = { 0, 3, 4, 31 };
    int arr2[] = { 3, 4, 6, 30 };
    mergedpointer = mergeSortedArrays(arr1, arr2);

    cout << "Merged array  :" << endl;
        for(auto item : mergedpointer) {
            cout << item << endl;
        }
        return 0;
    }

    int*    mergeSortedArrays(int array1[], int array2[])
    {
        int* result = new array<int> {};

        return result;
    }