/*
#include <stdio.h>

int main()
{

    printf("Hello World");

    return 0;

}
*/

#include<stdio.h>
int main(){
    int age=0;
    char name[100];
    printf("enter the age");
    scanf("%d",&age);
    printf("enter the name\n");
    scanf("%s",&name);
    
    printf("the name entered by user is %s and age is %d",name,age);
    return 0;
}