#include<stdio.h>
int main(){
    int first, second , third , sum ,avg;
    printf("Enter first number :- ");
    scanf("%d",&first);
    printf("Enter second number :- ");
    scanf("%d",&second);
    printf("Enter third number :- ");
    scanf("%d",&third);

    sum = first + second + third;
    avg = sum / 3;

    printf("Average of Three number is %d",avg);
    return 0;
}