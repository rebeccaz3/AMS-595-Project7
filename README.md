# AMS595-Project7 #
## How to Run the Code
   - Clone the repository or download the C++ code file to your local machine.
   - Open a terminal or command prompt and navigate to the directory containing the C++ file.
   - Compile the program using a C++ compiler. 
   - Run the program on your local machine


# Part 1: Conditional Statements

### Description
This program prompts the user to input a number and uses a 'switch' statement to print a message based on the input value. The messages correspond to specific values: 

### Output
   - The program will prompt you to enter a number. Based on the number you enter, it will print the corresponding message:
   - `-1` prints "negative one"
   - `0` prints "zero"
   - `1` prints "positive one"
   - and a default message for any other number
---
# Part 2: Printing a Vector

### Description
In this part of the project, a function `print_vector` is implemented to print the elements of a vector in C++. This function loops through the vector and prints each element to the console. 

### Output
The program will output the numbers in the vector, separated by spaces

---
# Part 3: While Loops (Fibonacci Sequence)

### Description
This program generates the Fibonacci sequence using a `while` loop. Starting with the first two numbers in the sequence (1 and 2), it calculates and prints each subsequent number until the value exceeds 4,000,000.

### Output
The output will display the Fibonacci numbers up to 4,000,000

---
# Part 4: Functions

# 4.1: If Prime

### Description
The `isprime` function checks whether a given number is a prime number. A prime number is a number greater than 1 that has no divisors other than 1 and itself.

### How It Works:
- If the number is less than or equal to 1, it returns `false`.
- It checks for divisibility from 2 to the square root of the number for efficiency.
- If any divisor is found, it returns `false`.
- If no divisors are found, it returns `true`.

### Test Cases:
- `isprime(2)` returns `1` (since 2 is prime).
- `isprime(10)` returns `0` (since 10 is not prime).
- `isprime(17)` returns `1` (since 17 is prime).

# 4.2: Factorize

### Description
The `factorize` function returns a list of all factors of a given integer. A factor is any integer that divides the number evenly.

### How It Works:
- It initializes an empty vector to store factors.
- It checks all integers from 1 to `n` to see if they divide `n` evenly.
- If a number divides evenly, it is added to the result vector.
- It returns the vector containing all the factors.

### Test Cases:
- `factorize(2)` returns `[1, 2]`
- `factorize(72)` returns `[1, 2, 3, 4, 6, 8, 9, 12, 18, 24, 36, 72]`
- `factorize(196)` returns `[1, 2, 4, 7, 14, 28, 49, 98, 196]`


# 4.3: Prime Factorization
### Description
This program defines a function `prime_factorize` that takes an integer `n` as input and returns a vector containing all the prime factors of `n`. It performs this by dividing the number by 2 until it is no longer divisible by 2, then checks divisibility by all odd numbers starting from 3. If the remaining number is greater than 2, it adds the number itself as a prime factor.

### Test Cases:

For the input number 72, the output will be:
2 2 2 3 3

---
# Part 5: Recursive Functions and Loops (Pascal's Triangle)

### Description
This C++ program prints the first `n` rows of Pascal's Triangle, where `n` is specified by the user. The program uses a recursive function to calculate the binomial coefficients and displays each row of the triangle.

### How It Works
- The user is prompted to enter a number `n`, which determines how many rows of Pascal's Triangle will be printed.
- The function `print_row()` calculates and prints each number in a row of Pascal's Triangle using the binomial coefficient formula.
- The function `print_pascals_triangle()` calls `print_row()` for each row, from 0 to `n-1`, and prints the corresponding row.

### Test Output
For `n = 5`, the output will be:
1 
1 1 
1 2 1 
1 3 3 1 
1 4 6 4 1 










