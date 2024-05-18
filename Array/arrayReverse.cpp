//Program to reverse array

#include<iostream>
using namespace std;

void reverseArray(int array[], int size){
    for (int i = 0; i < size / 2 ; i++) {
        int temp = array[i];
        array[i] = array[size - i - 1];
        array[size - i - 1] = temp;
    }

    for (int i = 0; i < size; i++) {
       cout << array[i] << " "; 
    }
}

int main(){
    int array[] = {1,2,3,4,5};

    reverseArray(array , sizeof(array) / sizeof(array[0]));

    return 0;
}
