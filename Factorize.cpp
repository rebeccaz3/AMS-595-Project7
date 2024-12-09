#include <iostream>
#include <vector>

// Function to print elements of a vector
void print_vector(std::vector<int> v) {
    // Loop through each element in the vector
    for (int i = 0; i < v.size(); i++) {
        // Print each element
        std::cout << v[i] << " ";
    }
    // Print a new line after the vector
    std::cout << std::endl;
}

// Function to find all factors of a given number n
std::vector<int> factorize(int n) {
    std::vector<int> answer; // Vector to store the factors of n
    
    // Loop through all numbers from 1 to n to check if they are factors of n
    for (int i = 1; i <= n; i++) {
        // If n is divisible by i, then i is a factor of n
        if (n % i == 0) {
            answer.push_back(i);
        }
    }
    return answer; // Return the vector containing all the factors of n
}

// Function to test the factorize function
void test_factorize() {
    print_vector(factorize(2));    // Expected output: 1 2 
    print_vector(factorize(72));   // Expected output: 1 2 3 4 6 8 9 12 18 24 36 72
    print_vector(factorize(196));  // Expected output: 1 2 4 7 14 28 49 98 196
}

int main() {
    test_factorize();  // Run the test cases to see the output
    return 0;
}
