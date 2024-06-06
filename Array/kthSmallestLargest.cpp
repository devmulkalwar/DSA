// Find the "Kth" max and min element of an array
#include <iostream>;
#include <algorithm> ; // for std::sort

using namespace std;

void sortArray(int array[], int size)
{
    // Use std::sort to sort the array
    std::sort(array, array + size);
}

void kthSmallest(int array[], int size, int k)
{
    // Sort the array first
    sortArray(array, size);

    // Now the kth smallest element is at position k-1
    cout << "kth smallest element of array is: " << array[k - 1] << endl;
    cout << "kth largest element of array is: " << array[size -k] << endl;
}

int main()
{
    int array[] = {4, 11, 3, 10, 5, 0};
    int arraySize = sizeof(array) / sizeof(array[0]);
    int k = 3;
    kthSmallest(array, arraySize, k);
    return 0;
}
