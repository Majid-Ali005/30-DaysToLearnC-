#include <iostream>
using namespace std;

int main()
{
    // for string input
    string name;
    cout << "enter your name";
    cin >> name;
    cout << "your name is: " << name;

    // for int input
    int number;
    cout << "enter any number here ";
    cin >> number;
    cout << "your number is " << number;

// simple calculator
int x, y;
int sum;
cout << "Type a number: ";
cin >> x;
cout << "Type another number: ";
cin >> y;
sum = x + y;
cout << "Sum is: " << sum;

}