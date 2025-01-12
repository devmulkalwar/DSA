#include<bits/stdc++.h>
using namespace std;

int main() {
    int row=0 , col=0;

    cout << "Enter number of rows: ";
    cin >> row;

    cout << "Enter number of columns: ";
    cin >> col;

    int arr[row][col];

   
    for (int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            cout << "Enter element [" << i << "][" << j << "]: ";
            cin >> arr[i][j];
        }
    }

    cout << "\nArray elements: "<<endl;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    return 0;
}
