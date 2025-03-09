#include <iostream>
#include <bitset>
using namespace std;

int main() {
    int sum = 4 + 5; // Calculate the sum of 4 and 5
    cout << bitset<4>(sum) << endl; // Convert the sum to binary and print it
    return 0;
}
