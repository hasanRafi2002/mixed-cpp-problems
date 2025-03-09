#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    size_t N;  // Number of slots
    cin >> N;

    size_t A, B, C, D, E;  // Number of problems solved by 5 teams
    cin >> A >> B >> C >> D >> E;

    // Array to store the number of problems solved by each team
    size_t solved[5] = {A, B, C, D, E};

    // Count how many teams solved at least one problem
    size_t count = 0;
    for (int i = 0; i < 5; i++) {
        if (solved[i] > 0) {
            count++;
        }
    }

    // Selection criteria based on the number of teams solving problems and available slots
    if ((count > 2 && N > 1) || (count >= 3 && N == 2)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
