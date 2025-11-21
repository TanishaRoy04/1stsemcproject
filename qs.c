
Details of 5 students (Name, Roll, Marks)
Output 1:
Tabular list of all 5 students with their details
Explanation 1:
The array of structures stores multiple student records and displays them in a table.*/
#include <stdio.h>
struct student{
    char name[100];
    int roll;
    int marks;
};
int main(){
    int i;
struct student s[5];
for(i=0;i<5;i++){
    printf("details of student %d\n",i+1);
    printf("enter name");
    scanf("%s",s[i].name);
    printf("enter roll number");
    scanf("%d",&s[i].roll);
    printf("enter marks");
    scanf("%d",&s[i].marks);
}
printf("\n %-15s %-10s %-10s\n","NAME","ROLL","MARKS");
for(i=0;i<5;i++){
printf("%-15s %-10d %-10d\n",s[i].name,s[i].roll,s[i].marks);
}



