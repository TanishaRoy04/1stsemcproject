//Q18: Write a program to assign grades based on a percentage input.

/*
Sample Test Cases:
Input 1:
95
Output 1:
Grade A

Input 2:
82
Output 2:
Grade B

Input 3:
68
Output 3:
Grade D

Input 4:
50
Output 4:
Grade F

*/

#include<stdio.h>
int main(){
    int percent;
    printf("enter the percent:");
    scanf("%d",&percent);
    if(percent>=90){
        printf("grade A");
    }    
    else if (percent>=80 && percent<90){
        printf("grade B");
    }
    else if (percent>=70 && percent<80){
        printf("grade C");
    }
    else if (percent>=60 && percent<70){
        printf("grade D");
    }
    else{
        printf("fail");
    }
    return 0;
}