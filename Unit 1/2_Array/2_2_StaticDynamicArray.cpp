#include<bits/stdc++.h>
using namespace std;

int main() {
    cout << "Static and Dynamic Arrays in C++\n\n";

    // 1. Static Array
    cout << "1. Static Array:\n";
    // Static array with fixed size
    int staticArray[5] = {10, 20, 30, 40, 50};

    // Displaying elements of the static array
    cout << "Elements of Static Array: ";
    for (int i = 0; i < 5; i++) {
        cout << staticArray[i] << " ";
    }
    cout << endl;

    // 2. Dynamic Array using 'new' and 'delete'
    cout << "\n2. Dynamic Array using 'new' and 'delete':\n";
    int size1;
    cout << "Enter the size of the array: ";
    cin >> size1;

    // Allocate memory for dynamic array using 'new'
    int* dynamicArrayNew = new int[size1];

    // Accepting elements for the dynamic array
    cout << "Enter " << size1 << " elements: ";
    for (int i = 0; i < size1; i++) {
        cin >> dynamicArrayNew[i];
    }

    // Displaying elements of the dynamic array
    cout << "Elements of Dynamic Array using 'new' and 'delete': ";
    for (int i = 0; i < size1; i++) {
        cout << dynamicArrayNew[i] << " ";
    }
    cout << endl;

    // Free the dynamically allocated memory
    delete[] dynamicArrayNew;

    // 3. Dynamic Array using 'malloc' and 'free'
    cout << "\n3. Dynamic Array using 'malloc' and 'free':\n";
    int size2;
    cout << "Enter the size of the array: ";
    cin >> size2;

    // Allocate memory for dynamic array using 'malloc'
    int* dynamicArrayMalloc = (int*)malloc(size2 * sizeof(int));

    // Accepting elements for the dynamic array
    cout << "Enter " << size2 << " elements: ";
    for (int i = 0; i < size2; i++) {
        cin >> dynamicArrayMalloc[i];
    }

    // Displaying elements of the dynamic array
    cout << "Elements of Dynamic Array using 'malloc' and 'free': ";
    for (int i = 0; i < size2; i++) {
        cout << dynamicArrayMalloc[i] << " ";
    }
    cout << endl;

    // Free the dynamically allocated memory
    free(dynamicArrayMalloc);

    // 4. Dynamic Array using 'std::vector'
    cout << "\n4. Dynamic Array using 'std::vector':\n";
    vector<int> dynamicArrayVector;

    int n;
    cout << "Enter the number of elements for vector: ";
    cin >> n;

    // Accepting elements for the vector
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        int element;
        cin >> element;
        dynamicArrayVector.push_back(element);
    }

    // Displaying elements of the dynamic array (vector)
    cout << "Elements of Dynamic Array using 'std::vector': ";
    for (int i = 0; i < dynamicArrayVector.size(); i++) {
        cout << dynamicArrayVector[i] << " ";
    }
    cout << endl;

    return 0;
}
