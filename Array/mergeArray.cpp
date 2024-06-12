//Merge 2 sorted arrays without using Extra space.

#include <iostream>

using namespace std;

int nextGap(int gap) {
    if (gap <= 1) {
        return 0;
    }
    return (gap / 2) + (gap % 2);
}

void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

void mergeArrays(int arr1[], int n, int arr2[], int m) {
    int gap = n + m;

    for (gap = nextGap(gap); gap > 0; gap = nextGap(gap)) {
        int i, j;

        for (i = 0; i + gap < n; ++i) {
            if (arr1[i] > arr1[i + gap]) {
                swap(arr1[i], arr1[i + gap]);
            }
        }

        for (j = (gap > n) ? gap - n : 0; i < n && j < m; ++i, ++j) {
            if (arr1[i] > arr2[j]) {
                swap(arr1[i], arr2[j]);
            }
        }

        if (j < m) {
            for (j = 0; j + gap < m; ++j) {
                if (arr2[j] > arr2[j + gap]) {
                    swap(arr2[j], arr2[j + gap]);
                }
            }
        }
    }
}

int main() {
    int arr1[] = {1, 4, 7, 8, 10};
    int arr2[] = {2, 3, 9};

    int n = sizeof(arr1) / sizeof(arr1[0]);
    int m = sizeof(arr2) / sizeof(arr2[0]);

    mergeArrays(arr1, n, arr2, m);

    cout << "Merged array 1: ";
    for (int i = 0; i < n; ++i) {
        cout << arr1[i] << " ";
    }
    cout << endl;

    cout << "Merged array 2: ";
    for (int i = 0; i < m; ++i) {
        cout << arr2[i] << " ";
    }
    cout << endl;

    return 0;
}
