#include<bits/stdc++.h>
using namespace std;
 
int main()
{
int a = 5;

string b = "abcde";

int array[] = {1,2,3,4};
int array1[] = {4};
cout<<a<<endl<<b<<endl<<array[0]<<" "<<array[1]<<" "<<array[2]<<endl;
int size = sizeof(array)/sizeof(array[0]);


cout<<"the size of array is : "<<size<<endl;





cout<<"array elements: ";
for (int i = 0; i < size; i++){
cout<<array[i]<<" ";
};





cout<<endl;

    return 0;
}