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
## Arithmetic Operators
Arithmetic operators are used to perform mathematical operations like addition, subtraction, multiplication, division, and modulus.

#### Addition (+): 
Adds two operands.
#### Subtraction (-):
Subtracts the second operand from the first.
#### Multiplication (*): 
Multiplies two operands.
#### Division (/): 
Divides the first operand by the second.
#### Modulus (%): 
Returns the remainder of division.
## Relational Operators
Relational operators are used to compare two values or expressions. They return a boolean value (true or false).

#### Greater than (>): 
Returns true if the left operand is greater than the right.
#### Less than (<): 
Returns true if the left operand is less than the right.
#### Equal to (==):
Returns true if both operands are equal.
#### Not equal to (!=): 
Returns true if the operands are not equal.
#### Greater than or equal (>=): 
Returns true if the left operand is greater than or equal to the right.
#### Less than or equal (<=): 
Returns true if the left operand is less than or equal to the right.
##Assignment Operators
Assignment operators are used to assign values to variables. They can also perform operations while assigning values.

#### Assignment (=): 
Assigns the value of the right operand to the left operand.
#### Add and assign (+=): 
Adds the right operand to the left operand and assigns the result to the left operand.
#### Subtract and assign (-=):
Subtracts the right operand from the left operand and assigns the result to the left operand.
#### Multiply and assign (*=): 
Multiplies the left operand by the right operand and assigns the result to the left operand.
#### Divide and assign (/=):
Divides the left operand by the right operand and assigns the result to the left operand.
#### Modulus and assign (%=): 
Takes the modulus of the left operand by the right operand and assigns the result to the left operand.
#Conditional Statements
Control statements in programming are instructions that tell the computer what to do based on certain conditions. 

They allow the program to make decisions. If a condition is true, the program executes one block of code; if it’s false, it executes another block.

Following are some of the decision-making statements in C++:

## if Statement
The if statement is used to execute a block of code only if a specified condition is true. If the condition is false, the block of code is skipped.
The if statement checks a condition, which evaluates to a boolean value (true or false).
### Syntax:
if (condition) {    // Statements to execute if the condition is true} 

If the condition is true, the code inside the if block is executed.

If the condition is false, the code inside the if block is skipped.
## if-else Statement
The if-else statement is used to execute one block of code if the condition is true and another block if the condition is false.

### Syntax:
if (condition) {
    // Executes this block if the condition is true
} 
else {
    // Executes this block if the condition is false
}
If the condition is true, the code inside the if block is executed.

If the condition is false, the code inside the else block is executed.
## Nested if-else Statements
A nested if-else statement is an if-else statement inside another if-else statement. It is used when you need to check multiple conditions in a hierarchical manner.
### Syntax:
if (condition2) {
        // Executes if condition2 is true
    } 
    else {
        // Executes if condition2 is false
    }
} 
else {
    // Executes if condition1 is false
}
The outer if-else statement is evaluated first.

If the outer condition is true, the inner if-else statement is evaluated.

This allows for more complex decision-making.
## if-else-if Ladder
The if-else-if ladder is used when there are multiple conditions to check. 

The program evaluates each condition sequentially, and when a true condition is found, the corresponding block of code is executed. If none of the conditions are true, the else block (if present) is executed.

### Syntax:
if (condition1) {
    // Executes if condition1 is true
} 
else if (condition2) {
    // Executes if condition2 is true
} 
else if (condition3) {
    // Executes if condition3 is true
} 
else {
    // Executes if none of the conditions are true
}
## Switch Statement
The switch statement is used to select one of many code blocks to execute based on the value of a variable. 

It provides a cleaner alternative to a series of if-else-if statements.

### Syntax:
switch (expression) {
    case value1:
        // Code to execute if expression == value1
        break;
    case value2:
        // Code to execute if expression == value2
        break;
    ...
    default:
        // Code to execute if expression doesn't match any case
        break;
}
The expression is evaluated once, and its value is compared with the values of each case.

If a match is found, the corresponding block of code is executed.

The break statement is used to exit the switch block after a match is found.

The default case is optional and is executed if no match is found.
