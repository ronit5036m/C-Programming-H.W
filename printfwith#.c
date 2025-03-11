#include<stdio.h>
int main(){

    int height = 7;
    int width[] = {5,4};

    for(int i=0; i<height; i++){
        if(i==0){
            for(int j = 0; j<width[0]; j++){
                printf("#");
            }
        }
        else if(i==3){
            for(int j = 0; j<width[1]; j++){
                printf("#");
            }
        }
        else{
            printf("#");
        }
        printf("\n");
    }

    return 0;
}