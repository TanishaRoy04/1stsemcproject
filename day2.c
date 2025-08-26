//Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.


#include<stdio.h>
int main(){
    int length;
    int breadth;
    int area;
    int perimeter;
    printf("enter the length");
    scanf("%d",&length);
    printf("enter the breadth");
    scanf("%d",&breadth);
    area=length*breadth;
    perimeter=2*(length+breadth);
    printf("the area of rectangle is %d",area);
    printf("the perimeter is %d",perimeter);
    return 0;
}

//Q4: Write a program to calculate the area and circumference of a circle given its radius.


#include<stdio.h>
int main(){
    float radius;
    printf("enter the radius:\n");
    scanf("%f",&radius);
    printf("the area of the circle is %f",3.14*radius*radius);
    printf("the circumference of the circle is %f",2*3.14*radius);
}