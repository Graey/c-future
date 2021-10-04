#include<stdio.h>

int main(){
    int num, i, m=0, flag=0;
    printf("Enter a number to check the number is prime or not? ");
    scanf("%d", &num);


    m=num/2;
    for(i=2; i<=m; i++){
        if(num%i==0)
        {
            printf("Number is not prime");
            flag=1;
            break;
        }
    }

    if (flag==0){
        printf("Number is prime!");
        return 0;
    }
}