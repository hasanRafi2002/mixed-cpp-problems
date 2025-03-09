#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        long long a, b, c;
        cin >> a >> b >> c;
        
        long long magic_needed = 0;
        
        // Check the first condition (a + b > c)
        if (a + b <= c) {
            magic_needed = max(magic_needed, c - (a + b) + 1);
        }
        
        // Check the second condition (a + c > b)
        if (a + c <= b) {
            magic_needed = max(magic_needed, b - (a + c) + 1);
        }
        
        // Check the third condition (b + c > a)
        if (b + c <= a) {
            magic_needed = max(magic_needed, a - (b + c) + 1);
        }
        
        cout << magic_needed << endl;
    }
    
    return 0;
}
