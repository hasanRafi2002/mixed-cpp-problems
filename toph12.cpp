#include <iostream>
#include <cmath>

// Function to check if a number is prime
bool isPrime(int num) {
    if (num <= 1) return false;
    if (num == 2) return true;
    if (num % 2 == 0) return false;
    
    for (int i = 3; i <= sqrt(num); i += 2) {
        if (num % i == 0) return false;
    }
    return true;
}

// Function to calculate sum of digits
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
    std::cin >> n;
    
    // Check if the number is prime and sum of digits is prime
    if (isPrime(n) && isPrime(sumOfDigits(n))) {
        std::cout << "Freedom!" << std::endl;
    } else {
        std::cout << "Bad luck!" << std::endl;
    }
    
    return 0;
}