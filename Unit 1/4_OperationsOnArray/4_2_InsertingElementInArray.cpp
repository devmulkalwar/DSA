#include <bits/stdc++.h>
using namespace std;

int main() {
    int size;

    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size];

    cout << "Enter " << size << " elements:" << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    cout << "\nArray elements: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    int ele = 0, pos = 0;
    cout << "Enter the index where you want to insert: ";
    cin >> pos;

    cout << "Enter the element you want to insert: ";
    cin >> ele;

    if (pos < 0 || pos > size) {
        cout << "Invalid index. Please enter a valid index." << endl;
        return 0;
    } else {
        size++;
        for (int i = size - 2; i >= pos; i--) {
            arr[i + 1] = arr[i];
        }
        arr[pos] = ele;
    }

    cout << "\nArray elements after insertion: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
