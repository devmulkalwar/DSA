//find Largest sum contiguous Subarray [V. IMP]
#include <iostream>
using namespace std;

int maxSubarraySum(int arr[], int n) {
    int max_current = arr[0];
    int max_global = arr[0];

    for (int i = 1; i < n; i++) {
        max_current = max(arr[i], max_current + arr[i]);
        if (max_current > max_global) {
            max_global = max_current;
        }
    }
    
    return max_global;
}

int main() {
    int arr1[] = {1, 2, 3, -2, 5};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    cout << "Maximum subarray sum for arr1: " << maxSubarraySum(arr1, n1) << endl;

    int arr2[] = {-1, -2, -3, -4};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    cout << "Maximum subarray sum for arr2: " << maxSubarraySum(arr2, n2) << endl;

    int arr3[] = {5, 4, 7};
    int n3 = sizeof(arr3) / sizeof(arr3[0]);
    cout << "Maximum subarray sum for arr3: " << maxSubarraySum(arr3, n3) << endl;

    return 0;
}
