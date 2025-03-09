Problem : Write a C++ program to calculate the factorial of a number n.The factorial of a number n is the product of all positive integers less than or equal to n.Mathematically, it is represented as :

    𝑛 ! =
        𝑛
× (
            𝑛
− 1)
× (𝑛
− 2)
×
⋯
× 1 n != n×(n−1)×(n−2)×⋯×1 C++ Code : cpp
                                           Copy code
#include <iostream>
                                       using namespace std;

int main()
{
    int n;
    long long factorial = 1;

    // Input from user
    cout << "Enter a number: ";
    cin >> n;

    // Check if the number is negative
    if (n < 0)
    {
        cout << "Factorial is not defined for negative numbers.";
    }
    else
    {
        // Calculate factorial using a loop
        for (int i = 1; i <= n; ++i)
        {
            factorial *= i;
        }
        cout << "Factorial of " << n << " is " << factorial;
    }

    return 0;
}
Example Input and Output:
Example 1:

Input:

css
Copy code
Enter a number: 5
Output:

csharp
Copy code
Factorial of 5 is 120
Example 2:

Input:

css
Copy code
Enter a number: 7
Output:

csharp
Copy code
Factorial of 7 is 5040
Example 3 (Negative input):

Input:

css
Copy code
Enter a number: -3
Output:

csharp
Copy code
Factorial is not defined for negative numbers.
Explanation:
For the input 5, the factorial is calculated as 5! = 5 * 4 * 3 * 2 * 1 = 120.
The program checks if the number is negative. If it is, the program informs the user that the factorial is not defined for negative numbers.





You said:
more
ChatGPT said:
ChatGPT
Sure! Here's another variation of the factorial problem where the factorial is calculated recursively. I'll also include more examples and detailed explanations.

Problem:
Write a C++ program to calculate the factorial of a number n using recursion.

C++ Code:
cpp
Copy code
#include <iostream>
using namespace std;

// Function to calculate factorial recursively
long long factorial(int n)
{
    // Base case: factorial of 0 or 1 is 1
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1); // Recursive step
    }
}

int main()
{
    int n;

    // Input from user
    cout << "Enter a number: ";
    cin >> n;

    // Check if the number is negative
    if (n < 0)
    {
        cout << "Factorial is not defined for negative numbers.";
    }
    else
    {
        // Calculate and display factorial using recursion
        cout << "Factorial of " << n << " is " << factorial(n);
    }

    return 0;
}
Example Input and Output : Example 1 :

    Input :

    css
        Copy code
            Enter a number : 4 Output :

    csharp
        Copy code
            Factorial of 4 is 24 Explanation :

    The recursive function breaks down 4 !as 4 *
    3 !,
    and then 3 !as 3 * 2 !, and so on until it reaches the base case 1 ! = 1. Example 2:

Input:

css
Copy code
Enter a number: 6
Output:

csharp
Copy code
Factorial of 6 is 720
Explanation:

For 6!, the function calculates as 6 * 5 * 4 * 3 * 2 * 1 = 720.
Example 3 (Negative input):

Input:

css
Copy code
Enter a number: -2
Output:

csharp
Copy code
Factorial is not defined for negative numbers.
Explanation of the Recursive Approach:
The function factorial(int n) calls itself with the value n-1, reducing the problem size until it reaches the base case where n is 0 or 1. At this point, it returns 1.
Then, the recursive calls "unwind" and multiply the numbers back up to calculate the final factorial.
For example, for factorial(4):
4! = 4 * factorial(3)
factorial(3) = 3 * factorial(2)
factorial(2) = 2 * factorial(1)
factorial(1) returns 1, and then the multiplication happens step-by-step back up the chain.
This approach is efficient for smaller numbers, but it could hit limits for larger numbers (e.g., 1000!) due to recursion depth in C++.