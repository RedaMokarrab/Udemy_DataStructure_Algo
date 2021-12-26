#include <iostream>

using namespace std;


void bubbleSort(int* array,int size);

void printArray(const int*  array,int size);
int main(int argc, char **argv)
{
	int array[]={30,2,112,3,6,1,2,5,70,25,26,90};
    int size = sizeof(array)/sizeof(int);
    
    printArray(array,size);
    bubbleSort(array,size);
    printArray(array,size);
    
    
	return 0;
}


void bubbleSort(int* array,int size){
    for(int i=0 ; i<size -1;i++)
    {
        for (int j=0;j<size-1;j++)
        {
            if(array[j]>array[j+1])
            {
                int temp = array[j];    
                array[j]=array[j+1];
                array[j+1]=temp;
            }
        }
    }
}

void printArray(const int*  array, int size)
{
    for(int i=0;i<size;i++)
        cout<<array[i]<<" ";
    
    cout<<endl;
    
}
