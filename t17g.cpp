#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    string result = "";  // To store the final result
    int i = 0;

    while (i < n) {
        // Check if the current position starts a filler word
        if (i + 2 < n && s[i] == 'o' && s[i+1] == 'c' && s[i+2] == 'o') {
            // We have detected "oco", now check for how many "co"s follow
            int j = i + 3;
            while (j + 1 < n && s[j] == 'c' && s[j+1] == 'o') {
                j += 2;
            }
            // Now we have found a complete filler from s[i] to s[j-1]
            result += "***";  // Replace the filler with "***"
            i = j;  // Skip past the filler
        } else {
            // If no filler, just add the current character
            result += s[i];
            i++;
        }
    }

    cout << result << endl;

    return 0;
}
