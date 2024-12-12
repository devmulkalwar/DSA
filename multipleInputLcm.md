# Code to find LCM of multiple inputs in the array

```cpp
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of inputs" << endl;
    cin >> n;

    int inputArray[n];
    cout << "Enter input " << endl;
    for (int i = 0; i < n; i++) {
        cin >> inputArray[i];
    }

    cout << "\nEntered inputs" << endl;
    for (int i = 0; i < n; i++) {
        cout << inputArray[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (inputArray[j] < inputArray[j + 1]) {
                int temp = inputArray[j + 1];
                inputArray[j + 1] = inputArray[j];
                inputArray[j] = temp;
            }
        }
    }

    cout << "Sorted array " << endl;
    for (int i = 0; i < n; i++) {
        cout << inputArray[i] << " ";
    }
    cout << endl;

    int limit = inputArray[0];
    for(int i=1;i<n;i++){
        limit=limit*inputArray[i];
    }
    int lcm = inputArray[0];
    int k = 2;
    bool flag = false;

    while (lcm <= limit) {
        flag = true;
        for (int i = 1; i < n; i++) {
            if (lcm % inputArray[i] != 0) {
                flag = false;
                break;
            }
        }
        if (flag) break;
        lcm = inputArray[0] * k;
        k++;
    }

    if (flag) {
        cout << "LCM of the array is: " << lcm << endl;
    } 

    return 0;
}
```
---