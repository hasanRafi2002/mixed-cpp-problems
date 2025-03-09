#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;
const int MAX = 2e5 + 5;

// Precompute factorials and their modular inverses
long long fact[MAX], inv_fact[MAX];

long long mod_inv(long long x, long long mod) {
    long long res = 1;
    long long power = mod - 2; // Fermat's Little Theorem
    while (power) {
        if (power % 2) res = (res * x) % mod;
        x = (x * x) % mod;
        power /= 2;
    }
    return res;
}

void precompute_factorials(int n) {
    fact[0] = fact[1] = 1;
    for (int i = 2; i <= n; ++i) {
        fact[i] = fact[i - 1] * i % MOD;
    }
    inv_fact[n] = mod_inv(fact[n], MOD);
    for (int i = n - 1; i >= 0; --i) {
        inv_fact[i] = inv_fact[i + 1] * (i + 1) % MOD;
    }
}

long long comb(long long n, long long k) {
    if (k > n) return 0;
    return fact[n] * inv_fact[k] % MOD * inv_fact[n - k] % MOD;
}

bool is_prime(long long x) {
    if (x <= 1) return false;
    if (x <= 3) return true;
    if (x % 2 == 0 || x % 3 == 0) return false;
    for (long long i = 5; i * i <= x; i += 6) {
        if (x % i == 0 || x % (i + 2) == 0) return false;
    }
    return true;
}

bool is_qtPie(long long x) {
    long long sqrt_x = sqrt(x);
    return sqrt_x * sqrt_x == x && is_prime(sqrt_x);
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, k;
    cin >> n >> k;

    vector<long long> chocolates(n);
    for (int i = 0; i < n; ++i) {
        cin >> chocolates[i];
    }

    precompute_factorials(n);

    // Count chocolates with taste value that are qtPie
    int qtPie_count = 0;
    for (long long taste_value : chocolates) {
        if (is_qtPie(taste_value)) {
            qtPie_count++;
        }
    }

    // Calculate the number of ways to choose k chocolates from qtPie chocolates
    cout << comb(qtPie_count, k) << '\n';

    return 0;
}
