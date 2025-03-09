#include <iostream>
using namespace std;

int main() {
    int age, weight;
    cin >> age >> weight;

    if (age < 3 || age >= 70) {
        cout << "Free" << endl;
    }
    else if (age >= 3 && age <= 12) {
        cout << "10" << endl;
    }
    else if (age >= 13 && age <= 64) {
        if (age >= 30 && age <= 40 && weight > 75) {
            cout << "18" << endl;
        } else {
            cout << "20" << endl;
        }
    }
    else if (age >= 65 && age <= 69) {
        cout << "15" << endl;
    }

    return 0;
}
