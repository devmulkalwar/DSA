//Given an array which consists of only 0, 1 and 2. Sort the array without using any sorting algo
#include <iostream>
using namespace std;

void sortArray(int array[], int size)
{
    int start = 0, mid = 0, end = size - 1;

    while (mid <= end)
    {
        switch (array[mid])
        {
        case 0:
            swap(array[start++], array[mid++]);
            break;
        case 1:
            mid++;
            break;
        case 2:
            swap(array[mid], array[end--]);
            break;
        }
    }
}

int main()
{
    int array[] = {0, 2, 1, 2, 0, 2};
    int size = sizeof(array) / sizeof(array[0]);

    sortArray(array, size);

    // Print sorted array
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;

    return 0;
}
