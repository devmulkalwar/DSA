#include <iostream>
#include <conio.h>
using namespace std;

int getMax(int num[], int n)
{
    int max = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (num[i] > max)
        {
            max = num[i];
        }
    }
    return max;
}

int getMin(int num[], int n)
{
    int min = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        if (num[i] < min)
        {
            min = num[i];
        }
    }
    return min;
}

int main()
{
    cout << "Enter size of Array : ";
    int size;
    cin >> size;

    int num[100];

    cout << "Enter elements of Array : ";

    for (int i = 0; i < size; i++)
    {
        cin >> num[i];
    }

    cout << "Maximum number is : " << getMax(num, size) << endl;
    cout << "Minimum number is : " << getMin(num, size);

    return 0;
}