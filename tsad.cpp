#include <iostream>
using namespace std;

int main() {
    int T, W;
    cin >> T >> W;  // Read the tastiness factor (T) and weight (W)

    if (T > 2000) {
        // If tastiness factor is greater than 2000, Bandor will eat the bananas
        cout << "Bandor, these bananas are tasty enough." << endl;
    } else if (T > 0 && W > 100) {
        // If tastiness factor is between 0 and 2000 and weight is greater than 100 grams
        cout << "Bandor, these bananas are tasty enough." << endl;
    } else {
        // Otherwise, Bandor will not eat the bananas
        cout << "No Bandor, bananas are not tasty enough." << endl;
    }

    return 0;
}
