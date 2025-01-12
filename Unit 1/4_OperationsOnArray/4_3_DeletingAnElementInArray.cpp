#include <bits/stdc++.h>
using namespace std;
int main()
{
    int size = 0;
    cout << "Enter the size of Array: ";
    cin >> size;
    int arr[size];
    cout << "Enter elements of Array: " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    int ele = 0;
    bool found = false;
    cout << "Enter the element to be deleted: ";
    cin >> ele;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == ele)
        {
            found = true;
            for (int j = i; j < size - 1; j++){
                arr[j] = arr[j + 1];
            }
            size--;
        }
    }
    if (!found)
    {
        cout << "Element not found in the array." << endl;
    }
    else
    {
        cout << "Updated Array: ";
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
    }
    return 0;
}