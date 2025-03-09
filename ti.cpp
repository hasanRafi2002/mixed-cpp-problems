
#include<bits/stdc++.h>
using namespace std;
 
const string LARGE_NUMBER = "12233424453533423435345342343334343360";

// Function to calculate modulo of a large number
long long modLargeNumber(const string &num, long long mod) {
    long long result = 0;
    for (char digit : num) {
        result = (result * 10 + (digit - '0')) % mod;
    }
    return result;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int T;
    cin >> T;

    while (T--) {
        long long N;
        cin >> N;


        long long digDreg = sqrt(N);


        if (modLargeNumber(LARGE_NUMBER, digDreg) == 0) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

 
    return 0;
}