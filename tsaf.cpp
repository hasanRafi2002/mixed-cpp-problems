#include <iostream>
#include <vector>
#include <unordered_set>
#include <string>
#include <cctype>
using namespace std;

int main() {
    int T;
    cin >> T;
    
    for (int t = 1; t <= T; ++t) {
        int n;
        cin >> n;
        string S;
        cin >> S;
        
        // Convert the string to lowercase for case-insensitive comparison
        for (char &c : S) {
            c = tolower(c);
        }

        vector<int> unique_count(n + 1, 0); // To store the number of unique devil fruits from island X to n
        unordered_set<char> seen; // To track unique fruits encountered from right to left

        // Precompute the number of unique fruits from each island X to the end
        for (int i = n - 1; i >= 0; --i) {
            seen.insert(S[i]);
            unique_count[i] = seen.size();
        }

        int Q;
        cin >> Q;
        vector<int> queries(Q);
        for (int i = 0; i < Q; ++i) {
            cin >> queries[i];
            queries[i]--; // Convert to 0-indexed
        }
        
        cout << "Case " << t << ":";
        for (int i = 0; i < Q; ++i) {
            cout << " " << unique_count[queries[i]];
        }
        cout << endl;
    }

    return 0;
}
