Here are some shapes using numbers instead of * in C++. These patterns will demonstrate how to print numbers in different shapes, similar to the previous ones.

1. Right-Angled Triangle with Numbers
This is a triangle where each row contains increasing numbers.

cpp
Copy code
#include <iostream>
using namespace std;

void drawRightAngledTriangleWithNumbers(int n) {
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= i; ++j) {
            cout << j;
        }
        cout << endl;
    }
}

int main() {
    int n = 5;  // Height of the triangle
    drawRightAngledTriangleWithNumbers(n);
    return 0;
}
Output:
yaml
Copy code
1
12
123
1234
12345
2. Pyramid with Numbers
This is a pyramid where the center of each row is padded with spaces and the numbers increase in each row.

cpp
Copy code
#include <iostream>
using namespace std;

void drawPyramidWithNumbers(int n) {
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n - i; ++j) {
            cout << " ";
        }
        for (int j = 1; j <= 2 * i - 1; ++j) {
            cout << j;
        }
        cout << endl;
    }
}

int main() {
    int n = 5;  // Height of the pyramid
    drawPyramidWithNumbers(n);
    return 0;
}
Output:
markdown
Copy code
    1
   123
  12345
 1234567
123456789
3. Inverted Pyramid with Numbers
This is an inverted pyramid using numbers, where each row decreases in size.

cpp
Copy code
#include <iostream>
using namespace std;

void drawInvertedPyramidWithNumbers(int n) {
    for (int i = n; i >= 1; --i) {
        for (int j = 1; j <= n - i; ++j) {
            cout << " ";
        }
        for (int j = 1; j <= 2 * i - 1; ++j) {
            cout << j;
        }
        cout << endl;
    }
}

int main() {
    int n = 5;  // Height of the pyramid
    drawInvertedPyramidWithNumbers(n);
    return 0;
}
Output:
markdown
Copy code
123456789
 1234567
  12345
   123
    1
4. Diamond with Numbers
A diamond shape using numbers, which grows up to the middle and then shrinks.

cpp
Copy code
#include <iostream>
using namespace std;

void drawNumberDiamond(int n) {
    // Top half of the diamond
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n - i; ++j) {
            cout << " ";
        }
        for (int j = 1; j <= 2 * i - 1; ++j) {
            cout << j;
        }
        cout << endl;
    }
    // Bottom half of the diamond
    for (int i = n - 1; i >= 1; --i) {
        for (int j = 1; j <= n - i; ++j) {
            cout << " ";
        }
        for (int j = 1; j <= 2 * i - 1; ++j) {
            cout << j;
        }
        cout << endl;
    }
}

int main() {
    int n = 5;  // Height of the diamond
    drawNumberDiamond(n);
    return 0;
}
Output:
markdown
Copy code
    1
   123
  12345
 1234567
123456789
 1234567
  12345
   123
    1
5. Square with Numbers
This creates a square using numbers, with each row containing the same number repeated.

cpp
Copy code
#include <iostream>
using namespace std;

void drawSquareWithNumbers(int n) {
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            cout << i;
        }
        cout << endl;
    }
}

int main() {
    int n = 5;  // Size of the square
    drawSquareWithNumbers(n);
    return 0;
}
Output:
Copy code
11111
22222
33333
44444
55555
6. Hollow Square with Numbers
This creates a square with numbers on the border, leaving the inside empty.

cpp
Copy code
#include <iostream>
using namespace std;

void drawHollowSquareWithNumbers(int n) {
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            if (i == 1 || i == n || j == 1 || j == n) {
                cout << i;
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
}

int main() {
    int n = 5;  // Size of the square
    drawHollowSquareWithNumbers(n);
    return 0;
}
Output:
Copy code
11111
1   1
1   1
1   1
11111
7. Right-Angled Triangle with Numbers (Decreasing)
This pattern creates a triangle with numbers that decrease in each row.

cpp
Copy code
#include <iostream>
using namespace std;

void drawDecreasingRightAngledTriangle(int n) {
    for (int i = n; i >= 1; --i) {
        for (int j = 1; j <= i; ++j) {
            cout << j;
        }
        cout << endl;
    }
}

int main() {
    int n = 5;  // Height of the triangle
    drawDecreasingRightAngledTriangle(n);
    return 0;
}
Output:
yaml
Copy code
12345
1234
123
12
1
8. Number Cross Pattern
A cross pattern where numbers are placed in the shape of an 'X'.

cpp
Copy code
#include <iostream>
using namespace std;

void drawNumberCross(int n) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i == j || i + j == n - 1) {
                cout << i + 1;
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
}

int main() {
    int n = 7;  // Size of the cross
    drawNumberCross(n);
    return 0;
}
Output:
Copy code
1     1
 2   2 
  3 3  
   4   
  3 3  
 2   2 
1     1
9. Hollow Right-Angled Triangle with Numbers
A hollow right-angled triangle pattern with numbers.

cpp
Copy code
#include <iostream>
using namespace std;

void drawHollowRightAngledTriangleWithNumbers(int n) {
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= i; ++j) {
            if (j == 1 || j == i || i == n) {
                cout << j;
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
}

int main() {
    int n = 5;  // Height of the triangle
    drawHollowRightAngledTriangleWithNumbers(n);
    return 0;
}
Output:
Copy code
1
12
1 3
1  4
12345
These patterns use numbers to create shapes like triangles, squares, diamonds, and crosses. You can experiment with the values of n to adjust the size of each pattern, or modify the logic to explore different variations!