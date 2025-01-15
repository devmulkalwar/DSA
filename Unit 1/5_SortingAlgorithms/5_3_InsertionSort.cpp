#include <bits/stdc++.h>
using namespace std;

void insertionSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int temp = arr[i];
        int j;
        for (j = i - 1; j >= 0 && arr[j] > temp; j--)
        {
            arr[j + 1] = arr[j];
        }
        arr[j + 1] = temp;
    }
}

void displayArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int n;
    cout << "Enter size of array : ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of array : ";

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
  
    insertionSort(arr, n);
    cout << "Sorted array is : ";
    displayArray(arr, n);
    return 0;
}