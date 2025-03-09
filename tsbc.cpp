#include <iostream>
using namespace std;

int main() {
    int K; // Milk production per day
    cin >> K;

    if (K <= 10) {
        cout << "Infected\n";
    } else if (K > 10 && K < 20) {
        cout << "Need Checkup\n";
    } else {
        cout << "Healthy\n";
    }

    return 0;
}
