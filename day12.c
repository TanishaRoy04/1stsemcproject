//Q23: Write a program to calculate a library fine based on late days.


#include<stdio.h>
int main(){
    int days;
    printf("enter the days:");
    scanf("%d",&days);
    if(days<=5){
        printf("the fine is %d",days*2);
    }
    else if (days>=6 && days<=10){
        printf("the fine is %d",days*4);
    }
    else if (days>=11 && days<=20){
        printf("the fine is %d",days*6);
    }
    else{
        printf("membership cancelled");
    }
    return 0;
}

//Q24: Write a program to calculate an electricity bill based on units consumed.



#include <stdio.h>

int main() {
    int units, bill = 0;
    scanf("%d", &units);

    if (units <= 100) {
        bill = units * 5;
    }
    else if (units <= 200) {
        bill = (100 * 5) + ((units - 100) * 6) + 150;
    }
    else {
        bill = (100 * 5) + (100 * 6) + ((units - 200) * 10) + 600;
    }

    printf("Bill: ₹%d\n", bill);

    return 0;
}
