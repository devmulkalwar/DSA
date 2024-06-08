//Minimum the maximum difference between heights [V.IMP]
#include <iostream>

using namespace std;

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int myMin(int a, int b) {
    return (a < b) ? a : b;
}

int myMax(int a, int b) {
    return (a > b) ? a : b;
}

int getMinDiff(int arr[], int n, int k) {
    bubbleSort(arr, n);
    int diff = arr[n-1] - arr[0];
    int smallest = arr[0] + k;
    int largest = arr[n-1] - k;

    for (int i = 0; i < n - 1; i++) {
        int minHeight = myMin(smallest, arr[i+1] - k);
        int maxHeight = myMax(largest, arr[i] + k);

        if (minHeight < 0) continue;
        diff = myMin(diff, maxHeight - minHeight);
    }

    return diff;
}

int main() {
    int k = 3;
    int n = 5;
    int arr[] = {3, 9, 12, 16, 20};

    int result = getMinDiff(arr, n, k);
    cout << "Minimum difference is " << result << endl;

    return 0;
}
