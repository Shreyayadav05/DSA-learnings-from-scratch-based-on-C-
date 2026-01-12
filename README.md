# DSA-learnings-from-scratch-based-on-C-
# Introduction
## What is C++?
C++ is a powerful, high-performance programming language widely used across various domains, including game development, system programming, embedded systems, and more. It is an extension of the C programming language with added features like object-oriented programming (OOP), making it versatile for both low-level and high-level programming tasks.

C++ is a popular choice in technical interviews due to its efficiency and control over system resources, making it a valuable skill for software developers.

# C++ Basic Syntax
#include <iostream> 
    
int main() {
    // ... code ....
    return 0;
}
### Breakdown of the Syntax:

#### #include <iostream>: 
This is a standard library header file that provides input and output functionalities, such as printing to the console (cout) and reading from the console (cin).

#### int main() { ... }: 
The main() function is the entry point of every C++ program. Execution begins here.

#### return 0;: T
his indicates that the program has executed successfully. A non-zero value typically signifies an error.

## Key Points to Remember:

#### Semicolon (;): 
Every statement in C++ must end with a semicolon.

#### Curly Braces {}: 
Always ensure that the main() function (and other blocks of code) are properly closed with a closing curly brace }.

#### endl: 
This is used to insert a newline character, moving the cursor to the next line.

## Comments in C++
#### Single-line Comment:
// This is a single-line comment
#### Multi-line Comment:
/*
This is a multi-line comment.
It can span multiple lines.
*/

using namespace std;: This directive allows you to use standard library functions (like cout and cin) without prefixing them with std::.

#include <bits/stdc++.h>: This is a convenience header that includes almost all standard C++ libraries. It’s commonly used in competitive programming to save time.

## Data Types in C++
C++ supports various data types to store different kinds of data. Here are some commonly used ones:
1) int
2) long
3) long long
4) float
5) double
6) string
7) char
8) bool

## Operators in C++
Operators are symbols that perform operations on variables and values. 

C++ supports various types of operators, including logical, arithmetic, relational, and assignment operators.

### Logical Operators
Logical operators are used to combine multiple conditions or to negate a condition. They return a boolean value (true or false).

#### AND (&&): 
Returns true if both conditions are true.

#### OR (||): 
Returns true if at least one condition is true.

#### NOT (!): 
Reverses the logical state of the condition (true becomes false, and vice versa).
