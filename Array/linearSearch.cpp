#include <iostream>
#include <conio.h>
using namespace std;

bool search(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if(arr[i]==key){
            return 1;
        }
    }
    
    return 0;
}

int main()
{
    int arr[10] = {1, 4, -5, 7, -9, 10, -2, 5, 9, 0};
    int key;

    cout << "Given array is : " << endl;
    
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }

    cout << "\n Enter the key to search for : ";
    cin >> key;

    if (search(arr, 10, key))
    {
        cout << "Entered number is present in array" << endl;
    }

    else
    {
        cout << "Entered number is not present in array" << endl;
    }

    return 0;
}