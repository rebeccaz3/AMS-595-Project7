#include <iostream>
#include <vector>

// Function to print a single row of Pascal's Triangle
void print_pascal_row(int n) {
    int value = 1; // The first value in each row is always 1

    // Loop to print the values in the row
    for (int i = 0; i <= n; i++) {
        std::cout << value << " "; // Print the current value
        value = value * (n - i) / (i + 1); // Update the value
    }
    std::cout << std::endl; // Move to the next line after printing the row
}

// Function to print the n rows of Pascal's Triangle
void print_pascals_triangle(int n) {
    // Loop through each row
    for (int i = 0; i < n; i++) {
        print_pascal_row(i); // Call function to print the i-th row
    }
}

int main() {
    int n;

    // Ask user for input n (the number of rows)
    std::cout << "Enter the number of rows to print: ";
    std::cin >> n;

    // Call function to print Pascal's Triangle
    print_pascals_triangle(n);

    return 0;
}
