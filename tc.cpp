#include <bits/stdc++.h>
using namespace std;

bool isPrime(int num){
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; i++){
        if (num % i == 0) return false;
    }
    return true;
}

int sumOfDigit(int num){
    int sum = 0;
    while (num > 0){
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main()
{

    int n;
    cin >> n;

    if (isPrime(n)){
        int digitSum = sumOfDigit(n);

        if (isPrime(digitSum)){
            cout << "Freedom!" << endl;
        }else{
            cout << "Bad luck!" << endl;
        }
    }else{
        cout << "Bad luck!" << endl;
    }

    return 0;
}