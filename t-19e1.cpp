#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double N;
    cin >> N;

    // Check if the number is equal to its integer part
    if (N == static_cast<int>(N)) {
        cout << "Integer" << endl;
    } else {
        cout << "Float" << endl;
    }

    return 0;
}
