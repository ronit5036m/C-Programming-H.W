#include<stdio.h>
#include<math.h>
int main(){
    float X1,Y1,X2,Y2, distance;
    printf("Enter point A value :- ");
    scanf("%f %f",&X1,&Y1);
    
    printf("Enter point B value :- ");
    scanf("%f %f",&X2,&Y2);

    distance = sqrt(pow(X2-X1,2) + pow(Y2-Y1,2)); 

    printf("The distance between Point A and Point B is %f",distance);


    return 0;
}