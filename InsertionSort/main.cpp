#include <iostream>

using namespace std;


void insertionSort(int* array,int size);

void printArray(const int*  array,int size);

int main(int argc, char **argv)
{
	int array[]={30,2,112,3,6,1,2,5,70,25,26,90};
    int size = sizeof(array)/sizeof(int);
    
    printArray(array,size);
    insertionSort(array,size);
    printArray(array,size);
    
    
	return 0;
}

/*two for loops
 * */
void insertionSort(int* array,int n){
     int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = array[i];
        j = i - 1;
 
        /* Move elements of array[0..i-1], that are
        greater than key, to one position ahead
        of their current position */
        while (j >= 0 && array[j] > key)
        {
            array[j + 1] = array[j];
            j = j - 1;
        }
        array[j + 1] = key;
    }
}

void printArray(const int*  array, int size)
{
    for(int i=0;i<size;i++)
        cout<<array[i]<<" ";
    
    cout<<endl;
    
}
