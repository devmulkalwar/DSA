#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << "Creating arrays of different data types in C++" << endl;

    // Integer array
    int intArray[] = {1, 2, 3, 4, 5};
    cout << "\nInteger array: ";
    for (int i = 0; i < 5; i++) {
        cout << intArray[i] << " ";
    }

    // Float array
    float floatArray[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    cout << "\n\nFloat array: ";
    for (int i = 0; i < 5; i++) {
        cout << floatArray[i] << " ";
    }

    // Double array
    double doubleArray[] = {1.123, 2.234, 3.345, 4.456, 5.567};
    cout << "\n\nDouble array: ";
    for (int i = 0; i < 5; i++) {
        cout << doubleArray[i] << " ";
    }

    // Character array
    char charArray[] = {'A', 'B', 'C', 'D', 'E'};
    cout << "\n\nCharacter array: ";
    for (int i = 0; i < 5; i++) {
        cout << charArray[i] << " ";
    }

    // String array
    string stringArray[] = {"apple", "banana", "cherry", "date", "elderberry"};
    cout << "\n\nString array: ";
    for (int i = 0; i < 5; i++) {
        cout << stringArray[i] << " ";
    }

    // Boolean array
    bool boolArray[] = {true, false, true, true, false};
    cout << "\n\nBoolean array: ";
    for (int i = 0; i < 5; i++) {
        cout << boolArray[i] << " ";
    }

    return 0;
}
