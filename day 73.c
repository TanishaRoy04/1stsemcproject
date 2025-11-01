/*Write a program to take two sorted arrays of size m and n as input. Merge both the arrays such that the merged array is also sorted. Print the merged array.
Input 1:
nums1 = [2,7,11,15] nums2 = [4,8,10]
Output 1:
2 4 7 8 10 11 15*/
#include <stdio.h>
int main(){
int n,m,i,j,k,temp;
printf("enter the size of the 1st  array");
scanf("%d",&n);
printf("enter the size of the 2nd array");
scanf("%d",&m);
int arr1[n];
int arr2[m];
printf("enter the elements of the 1st array");
for(i=0;i<n;i++){
    scanf("%d",&arr1[i]);
}
printf("enter the elements of the 2nd array");
for(i=0;i<m;i++){
    scanf("%d",&arr2[i]);
}
for(i=0;i<n;i++){
    /*notice n-i-1 as every i loop complete one time ,one largest element goes to the back ,
    we dont need to check it again and again,thats why -i*/
for(j=0;j<n-i-1;j++){
if(arr1[j]>arr1[j+1]){
temp=arr1[j];
arr1[j]=arr1[j+1];
arr1[j+1]=temp;
}
}
}
for(i=0;i<m;i++){
for(j=0;j<m-i-1;j++){
if(arr2[j]>arr2[j+1]){
temp=arr2[j];
arr2[j]=arr2[j+1];
arr2[j+1]=temp;
}
}
}
//i will be for arr1,j for arr2 and k for merged
int merged[n+m];
i=0,j=0,k=0;
while(i<n && j<m){
    if(arr1[i]<arr2[j])
    merged[k++]=arr1[i++];
    else
    merged[k++]=arr2[j++];
}
while(i<n){
    merged[k++]=arr1[i++];
}
while(j<m){
    merged[k++]=arr2[j++];
}
printf("the elements of the merged array is");
for(i=0;i<m+n;i++){
    printf("%d ",merged[i]);
}


    return 0;