#include <iostream>
#include <vector>

// Function to find the prime factorization of a number
std::vector<int> prime_factorize(int n) {
    std::vector<int> answer;  // Vector to store the prime factors
    
    // First, we divide n by 2 until it's no longer divisible by 2
    while (n % 2 == 0) {
        answer.push_back(2);  // Add 2 as a factor
        n /= 2;  // Divide n by 2
    }
    
    // Second, check for odd numbers from 3 upwards
    for (int i = 3; i * i <= n; i += 2) {
        while (n % i == 0) {
            answer.push_back(i);  // Add i as a factor
            n /= i;  // Divide n by i
        }
    }

    // If n is still greater than 2, it means it's a prime number
    if (n > 2) {
        answer.push_back(n);  // Add the remaining prime number
    }

    return answer;  // Return the vector of prime factors
}

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


// Function to test the prime_factorize function with different numbers
void test_prime_factorize() {
    print_vector(prime_factorize(2));   // Expected: [2]
    //print_vector(prime_factorize(72));  // Expected: [2, 2, 2, 3, 3]
    //print_vector(prime_factorize(196)); // Expected: [2, 2, 7, 7]
}

int main() {
    test_prime_factorize();  // Run the test function
    return 0;
}