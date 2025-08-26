//Q11: Write a program to input an integer and check whether it is even or odd using if–else.


#include<stdio.h>
int main(){
    int integer;
    printf("enter the integer\n");
    scanf("%d",&integer);
    if(integer%2==0){
        printf("the int is even");
    }
    else{
        printf("the int is odd");
    }
    return 0;
}

//Q12: Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.

#include<stdio.h>
int main(){
    int number;
    printf("enter the number");
    scanf("%d",&number);
    if(number>0){
        printf("the number is positive");
    }
    else
        if(number<0){
            printf("the number is negative");
        }
        else{
            printf("the number is 0");
        }
        
    return 0;
     
}