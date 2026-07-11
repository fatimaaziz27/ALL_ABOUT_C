# include <stdio.h>
// # include <conio.h>
int main(){
    int a,b=10,c=15;
    for(a=6; a<=8; a++){
        b=b+2;
        c=c+3;
        printf("%d\t%d\t%d\t\n",a,b,c);
    }
}




# include<stdio.h>
int main(){
    int a,f=1;
    for (a=1; a<=10; a++){
        f=f*a;
        printf("%d %d \n",a,f);
    }
}








# include<stdio.h>
int main(){
    int i,table;
    printf("Type any table number: ");
    scanf("%d",&table);
    for (i=1; i<=10; i++){
        printf("%d X %d = %d \n",table,i,table*i);
    }
}








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
    
