#include <iostream>
#include <string>
using namespace std;

int main() {
    // Reading the input
    int n; // Length of the fractional part
    cin >> n;
    string S, B; // S is the partial name, B is the blood type
    cin >> S >> B;

    int l, Q; // l is the length of names, Q is the number of people
    cin >> l >> Q;

    // Looping through each person's name and blood type
    for (int i = 0; i < Q; ++i) {
        string personName, personBloodType;
        cin >> personName >> personBloodType;

        // Check if the partial name is a substring of the person's name
        if (personName.find(S) != string::npos) {
            // If the person is suspected, check if blood type matches
            if (personBloodType == B) {
                cout << "Guilty" << endl; // Suspected and blood type matches
            } else {
                cout << "Suspected" << endl; // Suspected but blood type doesn't match
            }
        } else {
            cout << "Not guilty" << endl; // Not suspected
        }
    }

    return 0;
}
