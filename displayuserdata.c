#include<stdio.h>

int main(){

    char name[20];
    int dob;
    int mob;
    printf("Enter your name:- ");
    scanf("%[^\n]",name);
    printf("Enter your DOB:- ");
    scanf("%d",&dob);
    printf("Enter your Mobile number:- ");
    scanf("%d",&mob);
    
    printf("Name :- %s\n",name);
    printf("DOB :- %d\n",dob);
    printf("MOB:- :- %d\n",mob);
    return 0;
}