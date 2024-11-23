
// Comments in C++ are lines of text in your code that the computer ignores. They are written to explain what your code does, making it easier for you (and others) to understand the program later.
#include <iostream>

int main() {
    // This is a single-line comment
    // Printing a welcome message
    std::cout << "Welcome to the program!" << std::endl;

    /* 
       This is a multi-line comment. 
       The next section of the code will calculate the sum of two numbers.
    */
    int num1 = 10; // First number
    int num2 = 20; // Second number

    // Calculating the sum
    int sum = num1 + num2; 

    // Printing the result
    std::cout << "The sum is: " << sum << std::endl; 

    /*
       End of the program.
       Future improvement: Add input for numbers instead of using fixed values.
    */
    return 0;
}
