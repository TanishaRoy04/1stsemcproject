Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.

/*
Sample Test Cases:
Input 1:
1000 5 2
Output 1:
Simple Interest=100, Compound Interest=102.5

Input 2:
5000 7 3
Output 2:
Simple Interest=1050, Compound Interest=1125.76

*/

#include<stdio.h>
int main(){
    float p;
    int r;
    int t;
    printf("enter the principal\n");
    scanf("%f",&p);
    printf("enter the rate\n");
    scanf("%d",&r);
    printf("enter the time\n");
    scanf("%d",&t);
    simple interest=((p*r*t)/100)
    printf("simple interest is %f",simple interest);
    return 0;

}
