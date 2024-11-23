
## Print Text And Numbers

We are also learn realted about the print text in previous chapter but here is we are going to see some demo so Enjoy.  😊

## print Text With Different Ways






```bash
   #include <iostream>
#include <cstdio>
#include <iomanip>
#include <fstream>

int main() {
    // Using std::cout
    std::cout << "Hello, World!" << std::endl;

    // Using printf
    printf("Hello, World!\n");

    // Using std::cerr (for errors)
    std::cerr << "Hello, World!\n";

    // Using std::clog (for logging)
    std::clog << "Hello, World!" << std::endl;

    // Using file output
    std::ofstream file("output.txt");
    file << "Hello, World!" << std::endl;
    file.close();

    // Using iomanip for formatted output
    std::cout << std::setw(20) << "Hello, World!" << std::endl;

    return 0;
}

```

Here’s a quick explanation for each method:

Using std::cout:
```bash 
std::cout << "Hello, World!" << std::endl;
This is the standard way to print to the console in C++.

```
Using printf:
```bash 
printf("Hello, World!\n");
A C-style function for formatted output.

```
Using std::cerr:

```bash 
 std::cerr << "Hello, World!" << std::endl;
Prints to the error output stream (useful for debugging).

```

Using std::clog:

```bash 
std::clog << "Hello, World!" << std::endl;
rints to the log stream (generally for logging purposes).

```
Using iomanip for formatted output:

```bash 
std::cout << std::setw(20) << "Hello, World!" << std::endl;
Adjusts the alignment of text with the width set to 20 spaces.

```

## print Number In c++ With Different Ways
You can also use cout() to print numbers.

Note: However, unlike text, we don't put numbers inside double quotes:
```bash 
#include <iostream>
using namespace std;

int main() {
  cout << 3;
  return 0;
}
```

You can also perform mathematical calculations:
```bash
//For plus calculations
cout << 3 + 3;
//For Multiplocations calculations
cout << 2 * 5;
// For Substractions calculations
cout << 2 - 5;
//Devide calculations
cout << 2 / 5;
 ```
## C++ Comments
Comments can be used to explain C++ code, and to make it more readable. It can also be used to prevent execution when testing alternative code. Comments can be singled-lined or multi-lined.

## In C++ Here is Two Types Of Comments In C++
### 1. Single Line Comments
Single-line comments start with two forward slashes (//).

Any text between // and the end of the line is ignored by the compiler (will not be executed).

This example uses a single-line comment before a line of code:
```bash 
// This is a comment
cout << "Hello World!";
```
This example uses a single-line comment at the end of a line of code:

```bash 
cout << "Hello World!"; // This is a comment

```

### C++ Multi-line Comments
Multi-line comments start with /* and ends with */.

Any text between /* and */ will be ignored by the compiler:

```bash   
/* The code below will print the words Hello World!
to the screen, and it is amazing */
cout << "Hello World!";
 ```
 #### Single or multi-line comments?
 app koi sa b comments ka use kr sakty hy apne code me. its on up to you.

 It is up to you which you want to use. Normally, we use // for short comments, and /* */ for longer.


## Another explanation Of comments
#### What are Comments in C++?

Comments in C++ are lines of text in your code that the computer ignores. They are written to explain what your code does, making it easier for you (and others) to understand the program later.

### Types of Comments in C++

#### 1. Single-line comments:
Start with //.

Everything after // on the same line is ignored by the compiler.

#### 2. Multi-line comments:

Start with /* and end with */.

Used when you want to write longer explanations or temporarily hide blocks of code.

### Why are Comments Important?
Explain your code: Helps others (or future you) understand your thought process.

Debugging: Makes it easier to isolate issues by commenting out code.

Collaboration:
 Essential in team projects to describe what each part of the code does.

 ## Real-life Example
 Imagine you are building a car. A mechanic leaves sticky notes (comments) on different parts of the car to explain their purpose or remind the next mechanic what to check. Similarly, in programming, comments are "sticky notes" for your code.

 ### Code Example with Comments

 ```bash 
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

 ```

 ## Key Points 

 Comments are for humans, not the computer.

They do not affect how the program runs.

Use comments to make your code clear, maintainable, and understandable.