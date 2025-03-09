#include <iostream>
using namespace std;

int main() {
    long long N;
    cin >> N;

    // Find the remainder of N when divided by 3
    int remainder = N % 3;

    // Output the corresponding problem based on the remainder
    if (remainder == 0) {
        cout << "DP\n";
    } else if (remainder == 1) {
        cout << "Binary Search\n";
    } else {
        cout << "Graph Theory\n";
    }

    return 0;
}
