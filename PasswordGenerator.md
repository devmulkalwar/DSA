# Program to generate combination of password

```cpp
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    vector<string> nameParts = {"Dev", "Mulkalwar", "D", "M"};
    vector<string> dobParts = {"3", "12", "2003", "0312", "122003", "3122003", "3123", "0303"};
    vector<char> separators = {'!', '@', '#', '$', '%', '&', '*', '_', '-', '.'};
    vector<string> combinations;

    for (const string& name : nameParts) {
        for (const string& dob : dobParts) {
            for (char sep : separators) {
                string combo1 = name + sep + dob;
                string combo2 = dob + sep + name;

                if (combo1.length() >= 6) combinations.push_back(combo1);
                if (combo2.length() >= 6) combinations.push_back(combo2);
            }
        }
    }

    for (const string& name1 : nameParts) {
        for (const string& name2 : nameParts) {
            if (name1 != name2) {
                for (const string& dob : dobParts) {
                    for (char sep : separators) {
                        string combo = name1 + sep + name2 + sep + dob;

                        if (combo.length() >= 6) combinations.push_back(combo);
                    }
                }
            }
        }
    }

    cout << "Generated Combinations:" << endl;
    for (const string& combo : combinations) {
        cout << combo << endl;
    }

    return 0;
}
```