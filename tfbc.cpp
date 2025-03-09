#include <iostream>
using namespace std;

int main() {
    int O, R;  // O is the overs, R is the runs
    cin >> O >> R;

    // Calculate the run rate
    double runRate = (double)R / O;

    // Check if the run rate is 6 or higher
    if (runRate >= 6) {
        cout << "Yes\n";
    } else {
        cout << "No\n";
    }

    return 0;
}
