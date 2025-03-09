#include <iostream>
#include <vector>
using namespace std;

int main() {
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
            int boosterAUsed = min(requiredSpeedIncrease, X);
            totalBoosters += boosterAUsed;
            X -= boosterAUsed;

            if (requiredSpeedIncrease > boosterAUsed) {
                totalBoosters += (requiredSpeedIncrease - boosterAUsed) * 2;
            }

            speeds[i] = currentMaxSpeed;
        } else {
            currentMaxSpeed = speeds[i];
        }
    }

    cout << totalBoosters << endl;
    return 0;
}
