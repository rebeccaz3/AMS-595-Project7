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

int main() {
    // Create a vector of integers
    std::vector<int> myVector;
    
    // Add numbers to the vector
    myVector.push_back(1);
    myVector.push_back(2);
    myVector.push_back(3);
    myVector.push_back(4);
    myVector.push_back(5);

    // Call the print_vector function to display the contents of the vector
    print_vector(myVector);

    return 0;
}
