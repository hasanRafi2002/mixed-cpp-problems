#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    // Input the floating number as a string to preserve decimal representation
    string num_str;
    cin >> num_str;

    // Find the decimal point position
    size_t decimal_pos = num_str.find('.');

    // If no decimal point, it's an integer
    if (decimal_pos == string::npos) {
        cout << "Integer" << endl;
        return 0;
    }

    // Check everything after the decimal point
    bool is_integer = true;
    for (size_t i = decimal_pos + 1; i < num_str.length(); ++i) {
        if (num_str[i] != '0') {
            is_integer = false;
            break;
        }
    }

    // Output based on the check
    cout << (is_integer ? "Integer" : "Float") << endl;

    return 0;
}