#include <iostream>
using namespace std;

int main() {
    int B;
    cin >> B;

    if (B >= 30) {
        cout << 3 << endl;
    } else if (B >= 15) {
        cout << 2 << endl;
    } else if (B >= 5) {
        cout << 1 << endl;
    } else {
        cout << 0 << endl;
    }

    return 0;
}
