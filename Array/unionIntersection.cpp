//Find the Union and Intersection of the two sorted arrays.
#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

vector<int> doUnion(int a[], int n, int b[], int m) {
    unordered_set<int> unionSet;
    for (int i = 0; i < n; i++) {
        unionSet.insert(a[i]);
    }
    for (int i = 0; i < m; i++) {
        unionSet.insert(b[i]);
    }
    return vector<int>(unionSet.begin(), unionSet.end());
}

vector<int> doIntersection(int a[], int n, int b[], int m) {
    unordered_set<int> setA(a, a + n);
    unordered_set<int> intersectionSet;
    for (int i = 0; i < m; i++) {
        if (setA.find(b[i]) != setA.end()) {
            intersectionSet.insert(b[i]);
        }
    }
    return vector<int>(intersectionSet.begin(), intersectionSet.end());
}

int main() {
    int a1[] = {1, 2, 3, 4, 5};
    int b1[] = {1, 2, 3};
    int n1 = sizeof(a1) / sizeof(a1[0]);
    int m1 = sizeof(b1) / sizeof(b1[0]);
    
    vector<int> unionResult1 = doUnion(a1, n1, b1, m1);
    vector<int> intersectionResult1 = doIntersection(a1, n1, b1, m1);

    cout << "Union: ";
    for (int num : unionResult1) {
        cout << num << " ";
    }
    cout << endl;

    cout << "Intersection: ";
    for (int num : intersectionResult1) {
        cout << num << " ";
    }
    cout << endl;

    int a2[] = {85, 25, 1, 32, 54, 6};
    int b2[] = {85, 2};
    int n2 = sizeof(a2) / sizeof(a2[0]);
    int m2 = sizeof(b2) / sizeof(b2[0]);

    vector<int> unionResult2 = doUnion(a2, n2, b2, m2);
    vector<int> intersectionResult2 = doIntersection(a2, n2, b2, m2);

    cout << "Union: ";
    for (int num : unionResult2) {
        cout << num << " ";
    }
    cout << endl;

    cout << "Intersection: ";
    for (int num : intersectionResult2) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
