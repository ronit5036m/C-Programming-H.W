#include<stdio.h>
int main(){
    int exp, base, pow = 1;
    printf("Enter the base :- ");
    scanf("%d",&base);
    printf("Enter the Exponent :- ");
    scanf("%d",&exp);
    for(int i = 1; i<=exp; i++){
        pow *= base;
    }
    printf("%d^%d = %d",base,exp,pow);
    return 0;
}