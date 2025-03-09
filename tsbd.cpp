#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, X;
    cin >> N >> X;

    vector<int> cows(10); // Store the cow types (0 = white, 1 = black)
    for (int i = 0; i < 10; i++) {
        cin >> cows[i];
    }

    int budget = N;
    int whiteCowsBought = 0;

    for (int i = 0; i < 10; i++) {
        if (cows[i] == 0 && budget >= (i + 1)) { // Check if the cow is white and affordable
            whiteCowsBought++;
            budget -= (i + 1); // Deduct the cost from the budget
        }
        if (whiteCowsBought >= X) {
            break; // Stop if required number of white cows are bought
        }
    }

    if (whiteCowsBought >= X) {
        cout << "Happy" << endl;
    } else {
        cout << "Sad" << endl;
    }

    return 0;
}
