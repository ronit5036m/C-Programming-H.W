#include<stdio.h>
int main(){
    float centigrade , fahrenheit;
    printf("Enter the tempurature in centigrade :- ");
    scanf("%f",&centigrade);
    fahrenheit = (centigrade * 9 / 5) + 32;
    printf("%.2f in feranheit = %.2f",centigrade,fahrenheit);
    return 0;
}