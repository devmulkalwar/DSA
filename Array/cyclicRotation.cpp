//Write a program to cyclically rotate an array by one.
#include<iostream>

void cyclicRotate(int array[], int size){
    int first = array[0];
    for(int i=0;i<size;i++){
        if(i<size-1){
        array[i]=array[i+1];
        }

        if(i == size-1){
            array[i]=first;
        }      
    }

}

using namespace std;
int main()
{
    int array[] = {1,2,3,4,5};

    int size = sizeof(array) / sizeof(array[0]);

    cyclicRotate(array , size);

    for (int i = 0; i < size; i++)
    {
        cout<<array[i]<<" "; 
    }
    
    return 0;
}