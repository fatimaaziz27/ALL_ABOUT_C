//                         BASIC CONCEPTS
//                        ================

// Preprocessor Directive ----->
#include <stdio.h>
int main()
{
    // main code here <---->
    return 0;
}

// Print Statement ----->
// Syntax:
printf("write here...");
// Code:
printf("Hello");


// Types of Comments ----->

// Single-line comment:
// comment here ......

// Multi-line comment:
/*
   comment here ......
*/


// Data Types ----->
// Name          Example              Keyword / Format Specifier
// int           123456               %d
// char          'A'                  %c
// string        "Hello"              %s
// float         3.14                 %f

// NOTE:
// C does not have a built-in "string" data type.
// Strings are stored using a character array:
// char word[] = "word";

// bool is not a basic C data type unless you include:
// #include <stdbool.h>
// Then you can use:
// bool value = true;


// Operators ----->

// Arithmetic Operators
// +     Addition
// -     Subtraction
// *     Multiplication
// /     Division
// %     Modulus (Remainder)


// Assignment Operators
// =     Assign
// +=    Add and assign
// -=    Subtract and assign
// *=    Multiply and assign
// /=    Divide and assign
// %=    Modulus and assign


// Increment / Decrement
// ++    Increment by 1
// --    Decrement by 1


// Relational Operators
// >     Greater than
// <     Less than
// >=    Greater than or equal to
// <=    Less than or equal to
// ==    Equal to
// !=    Not equal to


// Logical Operators
// &&    AND
// ||    OR
// !     NOT


// Assigning Operator ----->
//    =     Assignment
// Example:
int num = 10;


// Variables ----->
// Syntax:
// data_type name;
//      OR
// data_type name = value;


// Initializing Variables

// This type of declaration is optional:
int num;
char letter;
float decimal_num;
char word[25];

// Initializing Variables
int number = 65;
char letter = 'r';
float decimal_num = 3.14;
char word[] = "word";
