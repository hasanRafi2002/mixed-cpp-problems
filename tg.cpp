#include<bits/stdc++.h>
using namespace std;
 
int main()
{
int n;
cin>>n;
string s;
cin>>s;

string result = "";

int i = 0;

while(i<n){

        if (i + 2 < n && s[i] == 'o' && s[i+1] == 'c' && s[i+2] == 'o') {
            int j = i + 3;
            while (j + 1 < n && s[j] == 'c' && s[j+1] == 'o') {
                j += 2;
            }

            result += "***";  
            i = j;  
        } else {
            result += s[i];
            i++;
        }
}

    cout << result << endl;

    return 0;
}