#include<stdio.h>
#define PI 3.1415
int main(){
    float radius , area , Circumference;
    printf("Enter the radius of circle :- ");
    scanf("%f",&radius);
    area = 2 * PI * radius;
    Circumference = PI * radius * radius;
    printf("Area of Circle %f\n",area);
    printf("Circumference of Circle %f",Circumference);
    return 0;
}