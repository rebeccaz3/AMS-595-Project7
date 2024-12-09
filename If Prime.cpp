#include <iostream>
#include <cmath>

// Function to check if a number is prime
bool isprime(int n) {
    // Handle base cases
    if (n <= 1) {
        return false; // 0 and 1 are not prime
    }
    if (n == 2) {
        return true; // 2 is prime
    }
    // Check for even numbers greater than 2
    if (n % 2 == 0) {
        return false; // Even numbers greater than 2 are not prime
    }
    // Check odd numbers from 3 to the square root of n
    for (int i = 3; i <= std::sqrt(n); i += 2) {
        if (n % i == 0) {
            return false; // n is divisible by i, then n is not prime
        }
    }
    return true; // otherwise, n is prime
}

// Function to test the isprime function
void test_isprime() {
    std::cout << "isprime(2) = " << isprime(2) << '\n'; // Expected: 1 (true)
    std::cout << "isprime(10) = " << isprime(10) << '\n'; // Expected: 0 (false)
    std::cout << "isprime(17) = " << isprime(17) << '\n'; // Expected: 1 (true)
}

int main() {
    test_isprime();
    return 0;
}

