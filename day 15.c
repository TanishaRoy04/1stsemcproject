//Q29: Write a program to calculate the factorial of a number.

/*
Sample Test Cases:
Input 1:
5
Output 1:
120

Input 2:
3
Output 2:
6

*/

#include<stdio.h>
int main(){
    int num,count,fact=1;
    printf("enter the no.\n");
    scanf("%d",&num);
    for (count=1;count<=num;count++){
        fact=fact*count;
    }
    printf("the factorial of %d is %d\n",num,fact);
    return 0;
}

