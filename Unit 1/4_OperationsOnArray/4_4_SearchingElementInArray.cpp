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
    cout << "Enter the element to be Searched: ";
    cin >> ele;
    int index = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == ele)
        {
            found = true;
            index = i;
        }
    }
    if (found)
    {
        cout << "Element found at index: " << index+1 << endl;
    }
    else
    {
        cout << "Element not found in the array." << endl;      
    }
    return 0;
}