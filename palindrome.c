/* Develop a program to find the reverse of a positive integer and check for
palindrome or not.*/

#include<stdio.h>
int main(){
    int num,rev=0,dup,rem;
    printf("Enter the number:\t");
    scanf("%d",&num);
    dup=num;
    while (num!=0)
    {
        rem=num%10;
        rev=(rev*10)+rem;
        num=num/10;
    }
    printf("Reverse of %d is %d\n",dup,rev);
    if (dup=rev)
    {
        printf("%d is a palindrome number\n",dup);
    }
    else
    {
        printf("%d is not a palindrome number\n",dup);
    }
    return 0;
}