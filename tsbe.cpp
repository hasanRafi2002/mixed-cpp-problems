#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, X;
    cin >> N >> X;

    vector<int> speeds(N);
    for (int i = 0; i < N; i++) {
        cin >> speeds[i];
    }

    long long totalBoosters = 0;
    int currentMaxSpeed = speeds[0];

    for (int i = 1; i < N; i++) {
        if (speeds[i] < currentMaxSpeed) {
            int requiredSpeedIncrease = currentMaxSpeed - speeds[i];
            
            // First try Booster-A
            int boosterAUsed = min(requiredSpeedIncrease, X);
            totalBoosters += boosterAUsed;
            X -= boosterAUsed;

            // If more speed increase needed, use Booster-B
            if (requiredSpeedIncrease > boosterAUsed) {
                int remainingSpeedIncrease = requiredSpeedIncrease - boosterAUsed;
                totalBoosters += remainingSpeedIncrease * 2;
            }

            speeds[i] = currentMaxSpeed;
        } else {
            // Update current max speed if speed increases
            currentMaxSpeed = speeds[i];
        }
    }

    cout << totalBoosters << endl;
    return 0;
}