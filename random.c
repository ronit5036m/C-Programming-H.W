#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    srand(time(NULL));
    int max = 25 , min = 30;

    // For Specific Range
    printf("%d\n",rand() % (max-min + 1) + min);

    // For 1 to 10 range
    printf("%d\n",rand() % 10 + 1);
    
}