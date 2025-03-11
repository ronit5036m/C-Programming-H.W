#include<stdio.h>

int main(){

    int number , cube = 1;
    printf("Enter a number :- ");
    scanf("%d",&number);

    for(int i = 1; i<=3; i++){
        cube *=number;
    }
    printf("Cube of %d is %d",number,cube);
    return 0;
}