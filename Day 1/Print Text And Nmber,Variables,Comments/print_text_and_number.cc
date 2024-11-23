#include <iostream>
#include <cstdio>
#include <iomanip>
#include <fstream>

// aap in tariko se b text ko print kr sakty hy.
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
