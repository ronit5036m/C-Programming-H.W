#include<stdio.h>
int main(){
    int a, b , temp;
    printf("Enter A value:- ");
    scanf("%d",&a);
    printf("Enter B value:- ");
    scanf("%d",&b);

    printf("Before swaping :- \n");
    printf("A = %d\n",a);
    printf("B = %d\n",b);
    
    // temp = a;
    // a = b;
    // b = temp;

    a = a + b;
    b = a - b;
    a = a - b;

    printf("After swaping :- \n");
    printf("A = %d\n",a);
    printf("B = %d\n",b);

    return 0;
}