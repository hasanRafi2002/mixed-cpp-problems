#include <iostream>
using namespace std;

int main() {
    size_t A, B;
    cin >> A >> B;  // Input two integers
    
    size_t X = A + B;  // Calculate the sum
    size_t Y = A * B;  // Calculate the product
    
    cout << X <<" "<< Y << endl;  // Output the results with a space between them
    
    return 0;
}
