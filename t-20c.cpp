#include <iostream>
using namespace std;

// Function to check if a number is prime
bool isPrime(int num) {
    if (num <= 1) return false;  // Numbers less than or equal to 1 are not prime
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

// Function to calculate the sum of digits of a number
int sumOfDigits(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main() {
    int n;
    cin >> n;

    // Check if the number is prime
    if (isPrime(n)) {
        // Calculate the sum of digits of n
        int digitSum = sumOfDigits(n);
        // Check if the sum of digits is prime
        if (isPrime(digitSum)) {
            cout << "Freedom!" << endl;
        } else {
            cout << "Bad luck!" << endl;
        }
    } else {
        cout << "Bad luck!" << endl;
    }

    return 0;
}
