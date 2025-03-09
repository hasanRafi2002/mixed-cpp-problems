
#include<bits/stdc++.h>
using namespace std;
 
int main()
{

     int n;
    cin >> n;


    vector<vector<long long>> grid(n + 1, vector<long long>(n + 1, 0));  // 1-based indexing
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            cin >> grid[i][j];
        }
    }


    vector<vector<long long>> prefix(n + 1, vector<long long>(n + 1, 0));
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            prefix[i][j] = grid[i][j] + prefix[i-1][j] + prefix[i][j-1] - prefix[i-1][j-1];
        }
    }


    int q;
    cin >> q;
    while (q--) {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        

        long long result = prefix[x2][y2] 
                           - (x1 > 1 ? prefix[x1-1][y2] : 0) 
                           - (y1 > 1 ? prefix[x2][y1-1] : 0) 
                           + (x1 > 1 && y1 > 1 ? prefix[x1-1][y1-1] : 0);
        
        cout << result << endl;
    }
 
 
    return 0;
}