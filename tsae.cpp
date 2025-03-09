#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    int N, P;
    cin >> N >> P; // Input number of trees and initial power

    vector<int> heights(N);
    for (int i = 0; i < N; ++i) {
        cin >> heights[i]; // Input the heights of the trees
    }

    int power = P; // Initialize power
    for (int i = 0; i < N - 1; ++i) {
        int x = abs(heights[i + 1] - heights[i]); // Calculate the power needed or gained
        if (heights[i + 1] > heights[i]) {
            if (power < x) {
                cout << "No" << endl; // Not enough power to jump to the next tree
                return 0; // Exit if Luffy can't jump
            }
            power -= x; // Deduct the power if jumping to a higher tree
        } else {
            power += x; // Gain power if jumping to a lower tree
        }
    }

    cout << "Yes" << endl; // If Luffy can reach the last tree
    return 0;
}
