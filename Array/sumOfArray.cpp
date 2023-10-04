#include <iostream>
#include <conio.h>
using namespace std;

int arraySum(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i]; 
    }
    
    return sum;
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

    cout << "Sum of all elements of array is : " << arraySum(num, size) << endl;
  
    return 0;
}