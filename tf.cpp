#include<bits/stdc++.h>
using namespace std;
 
int main()
{
int t;
cin>>t;

while(t--){
    long long a,b,c;
    cin>>a>>b>>c;
    long long magic = 0;

    if(a+b<=c){
        magic = max(magic, c-(a+b)+1);

    }

    if(a+c<=b){
        magic = max(magic, b-(a+c)+1);
    }

    if(b+c<a){
        magic = max(magic, a-(b+c)+1);
    }

    cout<<magic<<endl;
}
 
 
 
    return 0;
}