#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    // Return -1 if not enough trees
    if (N < 3) {
        cout << "-1\n";
        return 0;
    }

    vector<long long> trees(N);
    for (int i = 0; i < N; i++) {
        cin >> trees[i];
    }

    // Find max sum of 3 consecutive trees
    long long max_oranges = LLONG_MIN;
    for (int i = 0; i <= N - 3; i++) {
        long long current_sum = trees[i] + trees[i+1] + trees[i+2];
        max_oranges = max(max_oranges, current_sum);
    }

    cout << max_oranges << "\n";
    return 0;
}