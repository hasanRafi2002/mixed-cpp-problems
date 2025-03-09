#include <iostream>
#include <iomanip>  // For setting precision

using namespace std;

int main() {
    double A, B;  // Declare variables for area and base
    cin >> A >> B;  // Input area and base

    // Calculate height using the formula
    double height = (2 * A) / B;

    // Output the height with at least 4 digits after the decimal
    cout << fixed << setprecision(4) << height << endl;

    return 0;
}
