// Move all the negative elements to one side of the array
#include <iostream>
using namespace std;

void moveNegative(int array[], int size) {
    int start = 0, end = size - 1;

    while (start <= end) {
        if (array[start] < 0) {
            start++;
        } else if (array[end] >= 0) {
            end--;
        } else {
            swap(array[start++], array[end--]);
        }
    }
}

int main() {
    int array[] = {4, -11, 3, 0, -5, 0};
    int arraySize = sizeof(array) / sizeof(array[0]);

    moveNegative(array, arraySize);

    // Print sorted array
    for (int i = 0; i < arraySize; i++) {
        cout << array[i] << " ";
    }
    cout << endl;

    return 0;
}
