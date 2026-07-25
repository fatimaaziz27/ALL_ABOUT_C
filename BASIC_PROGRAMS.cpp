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
