#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++){
            if(arr[i]>arr[j]){
            int temp = arr[j];
            arr[j] = arr[i];
            arr[i] = temp;
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
    bubbleSort(arr,n);
    displayArray(arr,n);
    return 0;
}