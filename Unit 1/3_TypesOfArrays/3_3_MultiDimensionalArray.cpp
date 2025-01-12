#include<bits/stdc++.h>
using namespace std;

int main() {
    int x = 0, y = 0, z = 0;

    cout << "Enter number of rows (X): ";
    cin >> x;

    cout << "Enter number of columns (Y): ";
    cin >> y;

    cout << "Enter number of depth layers (Z): ";
    cin >> z;

    // Declare a 3D array
    int arr[x][y][z];

    // Accept input for the 3D array
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            for (int k = 0; k < z; k++) {
                cout << "Enter element [" << i << "][" << j << "][" << k << "]: ";
                cin >> arr[i][j][k];
            }
        }
    }

    // Display the 3D array elements
    cout << "\nArray elements: " << endl;
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            for (int k = 0; k < z; k++) {
                cout << arr[i][j][k] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}
