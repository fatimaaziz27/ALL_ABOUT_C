// My Age
#include <stdio.h>
int main()
{
    int age = 18;
    printf("My age is %d", age);
    return 0;
}





// Addition
#include <stdio.h>
int main()
{
    int a, b, answer;

    printf("Type first number: ");
    scanf("%d", &a);

    printf("Type second number: ");
    scanf("%d", &b);

    answer = a + b;

    printf("Answer = %d", answer);

    return 0;
}





// Even or Odd
#include <stdio.h>
int main()
{
    int num;

    printf("Type a number: ");
    scanf("%d", &num);

    if(num % 2 == 0)
    {
        printf("Even Number");
    }
    else
    {
        printf("Odd Number");
    }

    return 0;
}





// Age Checker
#include <stdio.h>
int main()
{
    int age;

    printf("Type your age: ");
    scanf("%d", &age);

    if(age >= 18)
    {
        printf("You are an adult");
    }
    else
    {
        printf("You are a child");
    }

    return 0;
}






// Increment
#include <stdio.h>
int main()
{
    int num = 5;

    printf("Before = %d\n", num);

    num++;

    printf("After = %d", num);

    return 0;
}





// Basic Calculator
#include <stdio.h>
int main()
{
    int num1, num2;
    int addition, subtraction, multiplication, division, remainder;

    printf("Type value of num1: ");
    scanf("%d", &num1);

    printf("Type value of num2: ");
    scanf("%d", &num2);

    addition = num1 + num2;
    subtraction = num1 - num2;
    multiplication = num1 * num2;
    division = num1 / num2;
    remainder = num1 % num2;

    printf("\nAddition = %d", addition);
    printf("\nSubtraction = %d", subtraction);
    printf("\nMultiplication = %d", multiplication);
    printf("\nDivision = %d", division);
    printf("\nRemainder = %d", remainder);

    return 0;
}





// Student Information
#include <stdio.h>
int main()
{
    int roll;
    char name[25];
    float marks;
    char grade;

    printf("Type your roll no.: ");
    scanf("%d", &roll);

    printf("Type your name: ");
    scanf("%s", name);

    printf("Type your marks: ");
    scanf("%f", &marks);

    printf("Type your grade: ");
    scanf(" %c", &grade);

    printf("\nStudent Information");
    printf("\n-------------------");

    printf("\nRoll No. : %d", roll);
    printf("\nName     : %s", name);
    printf("\nMarks    : %.2f", marks);
    printf("\nGrade    : %c", grade);

    return 0;
}





// Even or Odd
#include <stdio.h>
int main()
{
    int num;

    printf("Type any number: ");
    scanf("%d", &num);

    if(num % 2 == 0)
    {
        printf("Number is Even");
    }
    else
    {
        printf("Number is Odd");
    }

    return 0;
}





// Greater Number
#include <stdio.h>
int main()
{
    int num1, num2;

    printf("Type value of num1: ");
    scanf("%d", &num1);

    printf("Type value of num2: ");
    scanf("%d", &num2);

    if(num1 > num2)
    {
        printf("num1 is greater than num2");
    }
    else if(num2 > num1)
    {
        printf("num2 is greater than num1");
    }
    else
    {
        printf("Both numbers are equal");
    }

    return 0;
}





// Increment and Decrement
#include <stdio.h>
int main()
{
    int num;

    printf("Type any number: ");
    scanf("%d", &num);

    printf("\nOriginal value = %d", num);

    num++;

    printf("\nAfter increment = %d", num);

    num--;

    printf("\nAfter decrement = %d", num);

    return 0;
}
