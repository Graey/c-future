#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int number,guess;
    srand(time(0));
    number=rand()%100+1;//generates a random number between 1 and 100
    printf("The number is %d",number);
    for(int i=0;i<=number;i++){
        printf("Enter your guess:\n");
        scanf("%d",&guess);
        if (guess<number){
            printf("The random no is higher\n");
            continue;}
        if (guess>number){
            printf("The random no is lower \n");
            continue;}
        if (guess==number){
            printf("You won!!! with %d tries\n",i);
            break;
        }
    }

    return 0;
}