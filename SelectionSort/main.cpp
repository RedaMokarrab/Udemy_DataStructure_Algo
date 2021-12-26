#include <iostream>

using namespace std;


void selectionSort(int* array,int size);

void printArray(const int*  array,int size);

int main(int argc, char **argv)
{
	int array[]={30,2,112,3,6,1,2,5,70,25,26,90};
    int size = sizeof(array)/sizeof(int);
    
    printArray(array,size);
    selectionSort(array,size);
    printArray(array,size);
    
    
	return 0;
}

/*two for loops
 * */
void selectionSort(int* array,int size){
    for(int i=0 ; i<size ;i++)
    {
        int min = i;
        int temp = array[i];
        for (int j=i;j<size;j++)
        {
            if(array[j]<array[min])
            {
                min = j;
            }
        }
        array[i]=array[min];
        array[min] =temp; 
    }
}

void printArray(const int*  array, int size)
{
    for(int i=0;i<size;i++)
        cout<<array[i]<<" ";
    
    cout<<endl;
    
}
