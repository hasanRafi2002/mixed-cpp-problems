#include <iostream>
using namespace std;

int main() {
    int X, Y, Z;
    cin >> X >> Y >> Z;
    
    // Total number of animals
    int totalAnimals = X * Y;
    
    // Calculate minimum number of weapons needed
    int weaponsNeeded = (totalAnimals + Z - 1) / Z;
    
    // Output the result
    cout << weaponsNeeded << endl;
    
    return 0;
}
