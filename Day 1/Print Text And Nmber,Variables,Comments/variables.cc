#include <iostream>
using namespace std;

// A variable in C++ is a named storage location in memory that holds data which can be modified during 
// program execution. Each variable has a specific data type that determines the kind of data it can store,
//  such as integers, floating-point numbers, characters, and booleans

int main()
{
    //Int type variable
     int a = 12;
     cout << a;
     //string type variable
     string b = "hello world";
     cout << b;
int age;               // Declaration
float height = 5.9;   // Declaration and initialization


// Student data
int studentID = 15;
int studentAge = 23;
float studentFee = 75.25;
char studentGrade = 'B';

// Print variables
cout << "Student ID: " << studentID << "\n";
cout << "Student Age: " << studentAge << "\n";
cout << "Student Fee: " << studentFee << "\n";
cout << "Student Grade: " << studentGrade << "\n";


//Calculate the area of rectangular

// Create integer variables
int length = 4;
int width = 6;
int area;

// Calculate the area of a rectangle
area = length * width;

// Print the variables
cout << "Length is: " << length << "\n";
cout << "Width is: " << width << "\n";
cout << "Area of the rectangle is: " << area << "\n";


}