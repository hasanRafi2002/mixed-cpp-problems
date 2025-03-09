#include <bits/stdc++.h>
using namespace std;

int main()
{
    int p, d;
    double dis, pay;
    cin >> p >> d;

    dis = p - ((p * d) / 100);

    pay = dis + ((dis * 5) / 100);
    cout << fixed << setprecision(2);
    cout << "To pay: " << pay << endl;
    return 0;
}