#include <iostream>
#include <string>

using namespace std;

int main() {
    int N;
    cin >> N; // Input length of strings

    string A, B;
    cin >> A >> B; // Input strings A and B

    string B_double = B + B; // Concatenate B with itself

    // Directly use find() in the if condition
    size_t pos = B_double.find(A);
    if (pos < B_double.size()) { // If A is found, pos will be a valid index
        int left_rotations = pos;
        int right_rotations = N - left_rotations;

        cout << "YES" << endl;
        cout << min(left_rotations, right_rotations) << endl;
    } else { // A is not found
        cout << "NO" << endl;
    }

    return 0;
}
