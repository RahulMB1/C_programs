/* Develop a program to solve simple computational problems using arithmetic
expressions and use of each operator leading to simulation of a commercial calculator.
(No built-in-math function) */

#include<stdio.h>
int main(){
     int a,b;
     char op;
     printf("Enter arthemetical expression");
     scanf("%d%c%d",&a,&op,&b);
        switch (op)
        {
        case'+':
            printf("%d\n",a+b);
            break;
        
        case '-':
            printf("%d\n",a-b);
            break;
        
        case '*':
            printf("%d\n",a*b);
            break;

        case '/':
            printf("%d\n",a/b);
            break;

        default:
            printf("Invalid Operator\n");
            break;
        }
}
