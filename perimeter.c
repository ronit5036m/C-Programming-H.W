#include<stdio.h>
int main(){

    int A, B;
    float perimeter;
    
    printf("Enter Side A :- ");
    scanf("%d",&A);

    printf("Enter B:- ");
    scanf("%d",&B);

    perimeter = 2 * ( A + B );

    printf("Perimeter of rectangle :- %.2f",perimeter);

    return 0;
}