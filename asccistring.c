#include<stdio.h>
#include<string.h>
int main(){
    char str[10];
    printf("Enter a string between 10 char :- ");
    scanf("%[^\n]",str);
    int i = 0;
    while (str[i]!='\0'){
        printf("%c = %d\n",str[i],str[i]);
        i++;
    }
    return 0;
}