// Addition
#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Type value of num1: ");
    scanf("%d",&a);
    printf("Type value of num2: ");
    scanf("%d",&b);
    c = a+b;
    printf("num1 + num2 = %d",c);

}

// Subtraction
#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Type value of num1: ");
    scanf("%d", &a);
    printf("Type value of num2: ");
    scanf("%d", &b);
    c = a - b;
    printf("num1 - num2 = %d", c);
    return 0;
}

// Division
#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Type value of num1: ");
    scanf("%d", &a);
    printf("Type value of num2: ");
    scanf("%d", &b);
    c = a / b;
    printf("num1 / num2 = %d", c);
    return 0;
}

// Largest of Three Numbers
#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Type value of num1: ");
    scanf("%d", &a);
    printf("Type value of num2: ");
    scanf("%d", &b);
    printf("Type value of num3: ");
    scanf("%d", &c);
    if(a > b && a > c)
    {
        printf("num1 is greater");
    }
    else if(b > a && b > c)
    {
        printf("num2 is greater");
    }
    else
    {
        printf("num3 is greater");
    }
    return 0;
}

// Celsius to Fahrenheit
#include <stdio.h>
int main()
{
    float c, f;
    printf("Type temperature in Celsius: ");
    scanf("%f", &c);
    f = (c * 9 / 5) + 32;
    printf("Temperature in Fahrenheit: %.2f", f);
    return 0;
}

// Sum of Even Numbers
#include <stdio.h>
int main()
{
    int a, sum = 0;
    for(a = 2; a <= 20; a = a + 2)
    {
        sum = sum + a;
    }
    printf("Sum of Even Numbers = %d", sum);
    return 0;
}

// Simple Interest Calculator
#include <stdio.h>
int main()
{
    int p, r, t, si;
    printf("Type value of Principal: ");
    scanf("%d", &p);
    printf("Type value of Rate: ");
    scanf("%d", &r);
    printf("Type value of Time: ");
    scanf("%d", &t);
    si = (p * r * t) / 100;
    printf("Calculated Simple Interest: %d", si);
    return 0;
}

// Count and Total
#include <stdio.h>
int main()
{
    int a, total = 0;
    for(a = 1; a <= 10; a++)
    {
        total = total + a;
        printf("%d\n", a);
    }
    printf("Total = %d", total);
    return 0;
}

// Square and Cube
#include <stdio.h>
int main()
{
    int num, square, cube;
    printf("Type any number: ");
    scanf("%d", &num);
    square = num * num;
    cube = num * num * num;
    printf("Square = %d", square);
    printf("\nCube = %d", cube);
    return 0;
}

// Number Pattern
#include <stdio.h>
int main()
{
    int a, b = 0, c = 10;
    for(a = 1; a <= 10; a++)
    {
        b = b + 1;
        c = c - 1;
        printf("%d\t%d\t%d\n", a, b, c);
    }
    return 0;
}

// Student Pass or Fail
#include <stdio.h>
int main()
{
    int marks;
    printf("Type student marks: ");
    scanf("%d", &marks);
    if(marks >= 40)
    {
        printf("Student is Passed.");
    }
    else
    {
        printf("Student is Failed.");
    }
    return 0;
}

// loop_variables
# include <stdio.h>
int main(){
    int a,b=10,c=15;
    for(a=6; a<=8; a++){
        b=b+2;
        c=c+3;
        printf("%d\t%d\t%d\t\n",a,b,c);
    }
}

// Modulus Operator Program
#include <iostream>
using namespace std;

int main() {
    int x = 5;
    int y = 3;
    int z = x % y;  // z = 5 % 3 = 2 (remainder)

    cout << x - z << endl;  // 5 - 2 = 3

    return 0;
}

// Minutes Calculator
#include <iostream>
using namespace std;

int main() {
    int hours = 24;
    int minutes = 60;
    int result = hours * minutes;  // Multiplication

    cout << result << endl;

    return 0;
}

// Variable Increment Program
# include<stdio.h>
int main(){
    int a,b=10,c=15;
    for(a=6; a<=8; a++){
        b=b+2; c=c+3;
        printf("%d \t %d \t %d \t \n",a,b,c);
    }
}

// factorial
# include<stdio.h>
int main(){
    int a,f=1;
    for (a=1; a<=10; a++){
        f=f*a;
        printf("%d %d \n",a,f);
    }
}

// Table
# include<stdio.h>
int main(){
    int i,table;
    printf("Type any table number: ");
    scanf("%d",&table);
    for (i=1; i<=10; i++){
        printf("%d X %d = %d \n",table,i,table*i);
    }
}

// Even, Odd, and Reverse Number Pattern Program
// This program uses a for loop to print:
// a → Numbers from 1 to 10
// b → Even numbers (2, 4, 6, ..., 20)
// c → Odd numbers (1, 3, 5, ..., 19)
// d → Numbers in reverse (10, 9, 8, ..., 1)
// CODE:
# include<stdio.h>
int main(){
    int a,b=0,c=-1,d=11;
    for(a=1; a<=10; a=a+1){
        b=b+2; c=c+2; d=d-1;
        printf("%d \t %d \t %d \t %d \t \n",a,b,c,d);
    }
}

// Density Calculator
#include <stdio.h>
int main()
{
    int d,m,v;
    printf("Type value of Mass: ");
    scanf("%d",&m);
    printf("Type value of Volume: ");
    scanf("%d",&v);
    d = m/v;
    printf("Calculated Density: %d",d);
}

// Force Calculator
#include <stdio.h>
int main()
{
    int f,m,a;
    printf("Type value of Mass: ");
    scanf("%d",&m);
    printf("Type value of Accleratin: ");
    scanf("%d",&a);
    f = m*a;
    printf("Calculated Force: %d",f);
}

// Area Calculator
#include <stdio.h>
int main()
{
    int a,h,l;
    printf("Type value of Heigth: ");
    scanf("%d",&h);
    printf("Type value of Length: ");
    scanf("%d",&l);
    a = h*l;
    printf("Calculated Area: %d",a);
}

// Student Marks Percentage Calculator
#include <stdio.h>
int main()
{
    int total,eng,math,comp;
    float per;
    printf("Type computer marks: ");
    scanf("%d",&comp);
    printf("Type English marks: ");
    scanf("%d",&eng);
    printf("Type Math marks: ");
    scanf("%d",&math);
    total = eng + math + comp;
    per = (total * 100) / 300;
    printf("Total obtained marks: %d",total);
    printf("\nPercentage: %f",per);
}

// variable
#include <stdio.h>
int main() {
    int roll;
    char name[25];
    float height;
    char gender;

    printf("Type your roll no.: ");
    scanf("%d", &roll);
    printf("Type your name: ");
    scanf("%s", name);
    printf("Type your height: ");
    scanf("%f", &height);
    printf("Type your gender: ");
    scanf(" %c", &gender);

    printf("\n\n\t\t\t\tStudent Bio-Data");
    printf("\n\t\t\t\t_______________________");
    printf("\n\n\n\t\tRoll no.       :: %d", roll);
    printf("\n\n\n\t\tName           :: %s", name);
    printf("\n\n\n\t\tHeight         :: %.2f", height);
    printf("\n\n\n\t\tGender         :: %c", gender);
    return 0;
}

// Student Bio-Data
#include <stdio.h>
int main()
{
    int ID;
    char name[25];
    float height;
    char gender;

    printf("Type your ID: ");
    scanf("%d", &ID);

    printf("Type your name: ");
    scanf("%s", name);

    printf("Type your height: ");
    scanf("%f", &height);

    printf("Type your gender: ");
    scanf(" %c", &gender);

    printf("\n\n\t\t\t\tStudent Bio-Data");
    printf("\n\t\t\t\t________________________");

    printf("\n\n\t\t\t\tID :: %d", ID);
    printf("\n\n\t\t\t\tName :: %s", name);
    printf("\n\n\t\t\t\tHeight :: %.2f", height);
    printf("\n\n\t\t\t\tGender :: %c", gender);
}

STUDENT_RESULT_CALCULATOR
#include <stdio.h>
int main()
{
    int ID;
    char name[25];
    int m,u,c,marks;
    float per;

    printf("\n\n\t\t\t Institute Name");
    printf("\n\t\t\t________________\n");
    
    printf("\n\t ID       ::  ");
    scanf("%d",&ID);
    printf("\n\t Name       ::  ");
    scanf("%s",&name);
    printf("\n\t Math       ::  ");

    scanf("%d",&m);
    printf("\n\t Urdu       ::  ");
    scanf("%d",&u);
    printf("\n\t Computer       ::  ");
    scanf("%d",&c);

    marks = m + c + u;
    per = marks*100/300;
    printf("\n\n\t Marks Obtained    ::%d",marks);
    printf("\n\n\t Percentage    ::%f",per);

    if (per > 79.99){
        printf("\n\n\t Grade: A1");
    }
    else if (per > 69.99){
        printf("\n\n\t Grade: A");
    }
    else if (per > 59.99){
        printf("\n\n\t Grade: B");
    }
    else if (per > 49.99){
        printf("\n\n\t Grade: C");
    }
    else {
        printf("\n\n\t Grade: Fail");
    }
}

// Quiz
#include <stdio.h>
int main() {
    int ans, Q1, Q2, Q3;
    printf("Do you want to play a quiz? (0/1): ");
    scanf("%d", &ans);
    if (ans == 1) {
    
        printf("2 + 2 = ");
        scanf("%d", &Q1);
        if (Q1 == 4)
            printf("Answer is correct.\n");
        else
            printf("Wrong answer.\n");


        printf("2 + 12 = ");
        scanf("%d", &Q2);
        if (Q2 == 14)
            printf("Answer is correct.\n");
        else
            printf("Wrong answer.\n");


        printf("2 + 8 = ");
        scanf("%d", &Q3);
        if (Q3 == 10)
            printf("Answer is correct.\n");
        else
            printf("Wrong answer.\n");
    } 
    else {
        printf("Quiz cancelled.\n");
    }
}
