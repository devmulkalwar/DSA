#include <bits/stdc++.h>
using namespace std;

// Define a class
class Student {
public:
    int id;
    string name;
    float marks;

    void display() {
        cout << "Student Details:" << endl;
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }
};

// Define a structure
struct Employee {
    int empID;
    string empName;
    double salary;
};

// Define an enumeration
enum Days { MON, TUE, WED, THU, FRI, SAT, SUN };

// Define a union
union Data {
    int i;
    float f;
    char str[20];
};

int main() {
    cout << "Non-primitive datatypes in C++\n\n";

    // 1. Arrays
    cout << "1. Arrays in C++\n";
    int arr[5] = {10, 20, 30, 40, 50};
    cout << "Array elements: ";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n\n";

    // 2. Strings
    cout << "2. Strings in C++\n";
    string str = "Hello, World!";
    cout << "String: " << str << "\n\n";

    // 3. Classes
    cout << "3. Classes in C++\n";
    Student student1;
    student1.id = 1;
    student1.name = "John Doe";
    student1.marks = 90.5;
    student1.display();
    cout << "\n";

    // 4. Structures
    cout << "4. Structures in C++\n";
    Employee emp;
    emp.empID = 101;
    emp.empName = "Jane Smith";
    emp.salary = 55000.75;

    cout << "Employee Details:" << endl;
    cout << "Employee ID: " << emp.empID << endl;
    cout << "Employee Name: " << emp.empName << endl;
    cout << "Salary: $" << emp.salary << "\n\n";

    // 5. Unions
    cout << "5. Unions in C++\n";
    Data data;
    data.i = 42;
    cout << "Integer value: " << data.i << endl;
    data.f = 3.14;
    cout << "Float value: " << data.f << endl;
    strcpy(data.str, "C++ Programming");
    cout << "String value: " << data.str << "\n\n";

    // 6. Enumerations
    cout << "6. Enumerations in C++\n";
    Days today = FRI;
    cout << "Today is: ";
    switch (today) {
        case MON: cout << "Monday\n"; break;
        case TUE: cout << "Tuesday\n"; break;
        case WED: cout << "Wednesday\n"; break;
        case THU: cout << "Thursday\n"; break;
        case FRI: cout << "Friday\n"; break;
        case SAT: cout << "Saturday\n"; break;
        case SUN: cout << "Sunday\n"; break;
    }

    return 0;
}
