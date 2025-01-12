#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << "Primitive datatypes in C++" << endl;

    // Integer types
    cout << "1. Integer datatypes in C++" << endl;
    int a = 100;
    cout << "Integer datatype (int) : a = " << a << endl;

    short int shortInt = 32767; // Range: -32768 to 32767
    cout << "Short Integer (short int) : shortInt = " << shortInt << endl;

    long int longInt = 100000; // Larger range than int
    cout << "Long Integer (long int) : longInt = " << longInt << endl;

    long long int longLongInt = 123456789012345;
    cout << "Long Long Integer (long long int) : longLongInt = " << longLongInt << endl;

    unsigned int unsignedInt = 4294967295; // Range: 0 to 4,294,967,295
    cout << "Unsigned Integer (unsigned int) : unsignedInt = " << unsignedInt << endl;

    // Floating-point types
    cout << "\n2. Floating-point datatypes in C++" << endl;
    float b = 100.5f; // Precision up to 6 decimal places
    cout << "Float datatype (float) : b = " << b << endl;

    double c = 100.56789; // Precision up to 15 decimal places
    cout << "Double datatype (double) : c = " << c << endl;

    long double longDouble = 12345.6789012345L; // Extended precision
    cout << "Long Double datatype (long double) : longDouble = " << longDouble << endl;

    // Character type
    cout << "\n3. Character datatype in C++" << endl;
    char d = 'A'; // Represents a single character
    cout << "Character datatype (char) : d = " << d << endl;

    // Boolean type
    cout << "\n4. Boolean datatype in C++" << endl;
    bool e = true; // Stores true or false
    cout << "Boolean datatype (bool) : e = " << e << endl;

    return 0;
}
