//Q1: Write a program to input two numbers and display their sum.



#include<stdio.h>
int main(){
    int n1,n2;
    printf("enter the nos");
    scanf("%d %d",&n1,&n2);
    printf("th sum of the two nos is %d",n1+n2);
    return 0;

}

//Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.

#include<stdio.h>
int main(){
    int n1,n2;
    printf("enter the numbers");
    scanf("%d %d",&n1,&n2);
    printf("the sum of the nos is %d",n1+n2);
    printf("the difference of the nos is %d",n1-n2);
    printf("the product of the nos is %d",n1*n2);
    printf("the quotient of the nos is %d",n1/n2);
    return 0;
}