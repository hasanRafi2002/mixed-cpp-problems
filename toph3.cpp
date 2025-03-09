#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long A, B;
    cin >> A >> B;

    if (A > B)
    {
        if (A % 2 == 0)
        {
            cout << "FatGPT" << endl;
        }
        else
        {
            cout << "Uncertain" << endl;
        }
    }
    else if (B > A)
    {
        if (B % 2 == 0)
        {
            cout << "ThinGPT" << endl;
        }
        else
        {
            cout << "Uncertain" << endl;
        }
    }
    else
    {
        cout << "Draw" << endl;
    }

    return 0;
}