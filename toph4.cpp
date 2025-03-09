#include<bits/stdc++.h>
using namespace std;
 
int main()
{

int N;
cin>>N;

if(N<3){
cout<<-1<<endl;
return 0;
}



vector<int> orange(N);
for(int i=0; i<N; i++){
cin>>orange[i];
}





long long maxOrange = orange[0]+ orange[1]+orange[2];


for(long long i=1; i<=N-3; i++){
long long sum = orange[i]+ orange[i+1]+orange[i+2];
maxOrange = max(maxOrange,sum);
}
 
 cout<<maxOrange<<endl;
 
 
    return 0;
}