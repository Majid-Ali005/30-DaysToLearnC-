
# C++ Variables

Variables are containers for storing data values.

In C++, there are different types of variables (defined with different keywords), for example:
- int - stores integers (whole numbers), without decimals, such as 123 or -123
- int - stores integers (whole numbers), without decimals, such as 123 or -123
- char - stores single characters, such as 'a' or 'B'. Char values are surrounded by single quotes
- string - stores text, such as "Hello World". String values are surrounded by double quotes
- bool - stores values with two states: true or false

### Declaring (Creating) Variables





![App Screenshot](https://media.geeksforgeeks.org/wp-content/uploads/20221202181339/Cvariables1.png)

To create a variable, specify the type and assign it a value:

### Syntax
```bash
  type variableName = value;
```
- pehly aap ko variable ka type batana hota hy or phir aap ko variableName ant then koi b value jaise hello world etc.
- = equal laga dene se jo ba value hongi wo oss variable k andar ja kr store hojayegi that is called assign operator jo k value ko assing krtha hy.

Where type is one of C++ types (such as int), and variableName is the name of the variable (such as x or myName). The equal sign is used to assign values to the variable.

To create a variable that should store a number, look at the following example:

### Example
Create a variable called myNum of type int and assign it the value 15:
```bash
  int myNum = 15;
  cout << myNum;
```

#### You can also declare a variable without assigning the value, and assign the value later:

```bash
int myNum;
myNum = 15;
cout << myNum;
 ```

 Note that if you assign a new value to an existing variable, it will overwrite the previous value:

 #### Example
 ```bash 
int myNum = 15;  // myNum is 15
myNum = 10;  // Now myNum is 10
cout << myNum;  // Outputs 10
 ```
### Other Types
A demonstration of other data types:

#### Example

```bash 
int myNum = 5;               // Integer (whole number without decimals)
double myFloatNum = 5.99;    // Floating point number (with decimals)
char myLetter = 'D';         // Character
string myText = "Hello";     // String (text)
bool myBoolean = true;       // Boolean (true or false)
```

### Display Variables

The cout object is used together with the << operator to display variables.

To combine both text and a variable, separate them with the << operator:

```bash 
int myAge = 35;
cout << "I am " << myAge << " years old.";
```

### Add Variables Together

To add a variable to another variable, you can use the + operator:

```bash 
int x = 5;
int y = 6;
int sum = x + y;
cout << sum;
```

## C++ Declare Multiple Variables

iss me aap aik hi line me Multiple variable bna kr value ossi time ya phir baad me assign kr sakty hy.

To declare more than one variable of the same type, use a comma-separated list:

#### Example

```bash 
int x = 5, y = 6, z = 50;
cout << x + y + z;
```

### One Value to Multiple Variables

You can also assign the same value to multiple variables in one line:

#### Example
```bash 
int x, y, z;
x = y = z = 50;
cout << x + y + z;
```

## C++ Identifiers

All C++ variables must be identified with unique names.

These unique names are called identifiers.

Identifiers can be short names (like x and y) or more descriptive names (age, sum, totalVolume).

Note: It is recommended to use descriptive names in order to create understandable and maintainable code:

#### Example

```bash 
// Good
int minutesPerHour = 60;

// OK, but not so easy to understand what m actually is
int m = 60;
```

The general rules for naming variables are:

- Names can contain letters, digits and underscores
- Names must begin with a letter or an underscore (_)
- Names are case-sensitive (myVar and myvar are different variables)
- Names cannot contain whitespaces or special characters like !, #, %, etc.
- Reserved words (like C++ keywords, such as int) cannot be used as names

## C++ Constants
Constants me agr aap aik bar value assign krdo tho phir aap oss ko change nhi kr sakty hy. jaise hum log equal laga kr change krthy thy.

When you do not want others (or yourself) to change existing variable values, use the const keyword (this will declare the variable as "constant", which means unchangeable and read-only):

### Example Error
```bash
const int myNum = 15;  // myNum will always be 15
myNum = 10;  // error: assignment of read-only variable 'myNum'
 ```

 q k aap ne pehly 15 assin kiya hy myNum me magr aap oss ko change kr rhy ho 10 k sath jo k constant me nhi hota hy because constant is unchangeable.

 You should always declare the variable as constant when you have values that are unlikely to change:

 ### Example
```bash 
const int minutesPerHour = 60;
const float PI = 3.14;
```

q k inn ki value fix hoti hy duniya me tho iss ko hum ne fix rakha howa hy tha k koi iss ko change na kr saky.

## Notes On Constants

When you declare a constant variable, it must be assigned with a value:

### Example
Like this:
```bash 
const int minutesPerHour = 60;
```
This however, will not work:

```bash 
const int minutesPerHour;
minutesPerHour = 60; // error
```
## C++ Variables Real Life Examples
Let's get a bit more practical!

Often in our examples, we simplify variable names to match their data type (myInt or myNum for int types, myChar for char types, and so on). This is done to avoid confusion.

However, for a practical example of using variables, we have created a program that stores different data about a college student:

### Example

```bash 
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
```

## Calculate the Area of a Rectangle

In this real-life example, we create a program to calculate the area of a rectangle (by multiplying the length and width):

```bash 
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
```
