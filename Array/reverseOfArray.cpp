#include <iostream>
#include <conio.h>
using namespace std;

void reverseArray(int arr[], int size)
{
    int start = 0;
    int end = size - 1;

    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void printArray(int arr[],int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    cout << "\n Enter size of Array : ";
    int size;
    cin >> size;

    int array[100];
    cout << "\n Enter elements of Array : ";

    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }

    reverseArray(array, size);

     cout << "\n Reverse of array is : ";
    printArray(array, size);

    return 0;
}