#include <iostream>

int main() {
    // Initialize the first two Fibonacci numbers
    int a = 1;
    int b = 2;

    // Print the first Fibonacci number
    std::cout << a << " "; 

    // While loop to generate Fibonacci numbers that do not exceed 4,000,000
    while (b <= 4000000) {
        // Print the next Fibonacci number
        std::cout << b << " ";

        // Update the Fibonacci numbers
        int next = a + b;
        a = b;
        b = next;
    }
    return 0;
}