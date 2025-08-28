//Q14: Write a program to input a character and check whether it is a vowel or consonant using if–else.

#include<stdio.h>
int main(){
    char x;
    printf("enter the character");
    scanf("%c",&x);
    if(x =='a' || x=='e' || x=='i'|| x=='o'|| x=='u'){
        printf("%c is a vowel",x);
    }
    else{
        printf("% c is consonant",x);
    }
    return 0;
}
