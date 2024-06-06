// Find the maximum and minimum element in an array
#include <iostream>
using namespace std;

void minMaxArray(int array[], int size)
{
    int min = INT_MAX;
    int max = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (array[i] < min)
        {
            min = array[i];
        }
        if (array[i] > max)
        {
            max = array[i];
        }
    }
    cout << "The minimum number is : " << min << endl;
    cout << "The maximum number is : " << max << endl;
}

int main()
{
    int array[] = {4, 2, 3, 10, 5, 0};

    minMaxArray(array, sizeof(array) / sizeof(array[0]));

    return 0;
}
