#include <bits/stdc++.h>
using namespace std;

void selectionSort(int arr[],int n){
    for (int i = 0; i < n-1; i++)
    {
        int minIndex = i;

        for (int j = i+1; j < n; j++)
        {
            if(arr[j]<arr[minIndex]){
                    minIndex=j;
            }

            if(minIndex!=i){
                int temp = arr[i];
                arr[i] = arr[minIndex];
                arr[minIndex] = temp;
            }
        }
        
    }   
}

void displayArray(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter elements : " ;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    selectionSort(arr,n);
    cout<<"Sorted array is : ";
    displayArray(arr,n);
    return 0;
}