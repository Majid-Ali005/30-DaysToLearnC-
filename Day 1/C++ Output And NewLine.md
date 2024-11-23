
## C++ Output (Print Text)

The cout object, together with the << operator, is used to output values and print text.

Just remember to surround the text with double quotes (""):

<< that is called insertions operator
>> that is called right shift operator or extractions operator





## Cout Oputput in C++

You can add as many cout objects as you want. However, note that it does not insert a new line at the end of the output:

```bash
   cout << "Hello World!";
```
##  Many Cout Print output See Below
```bash
     cout << "Hello World!";
    cout << "I am learning C++";

```
##  To Print New Line
To insert a new line in your output, you can use the \n character:
```bash
    cout << "Hello World! \n";
    cout << "I am learning C++";
```

## You can also use another << operator and place the \n character after the text, like this:
```bash
     cout << "Hello World!" << "\n";
     cout << "I am learning C++";
```

## Tip: Two \n characters after each other will create a blank line:
```bash
     cout << "Hello World!" << "\n\n";
     cout << "I am learning C++";
```
## Another way to insert a new line, is with the endl manipulator:

```bash
     cout << "Hello World!" << endl;
     cout << "I am learning C++";
```
## Note The Below point

Both \n and endl are used to break lines. However, \n is most used.

But what is \n exactly?
The newline character (\n) is called an escape sequence, and it forces the cursor to change its position to the beginning of the next line on the screen. This results in a new line.

Examples of other valid escape sequences are:

\t	Creates a horizontal tab	

\\	Inserts a backslash character (\)	

\"	Inserts a double quote character

